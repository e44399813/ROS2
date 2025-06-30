/*
  需求：编写动作服务端实现，可以提取客户端请求提交的整型数据，并累加从1到该数据之间的所有整数以求和，
       每累加一次都计算当前运算进度并连续反馈回客户端，最后，在将求和结果返回给客户端。
  分析：
    1.创建动作服务对象
    2.处理提交的目标之
    3.生成连续反馈
    4.处理取消请求
    5.反馈最终结果
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    3.定义节点类；
      3-1.创建动作服务端；
      3-2.处理请求数据；(回调函数)
      3-3.处理取消任务请求；(回调函数)
      3-4.生成连续反馈与最终响应。(回调函数)
    4.调用spin函数，并传入节点对象指针；
    5.释放资源。

*/

// 1.包含头文件
#include "rclcpp/rclcpp.hpp"
// 主要用于动作通讯对象(相较于话题和服务通信)
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfaces_demo/action/progress.hpp"

using namespace std::placeholders;
using base_interfaces_demo::action::Progress;  //动作信息接口类型
using GoalHandleProgress = rclcpp_action::ServerGoalHandle<Progress>;  //动作对象
// 3.定义动作通信服务端节点类
class MiniActionServer : public rclcpp::Node
{
private:
  rclcpp_action::Server<Progress>::SharedPtr action_server_;

  // 3-2.处理请求数据
  /*
    回调函数的定义(规定回调函数的返回值类型和参数值)
    std::function<GoalResponse(const GoalUUID &,std::shared_ptr<const typename ActionT::Goal>)>;

    业务逻辑:判断提交的数字是否大于1,是就接受,否则就拒绝
  */
  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const Progress::Goal> goal)
  {
    (void)uuid;  //各客户端唯一标识,此例未使用
    RCLCPP_INFO(this->get_logger(), "接收到动作客户端请求,请求数字为%ld", goal->num);
    if (goal->num <= 1)
    {
      RCLCPP_INFO(this->get_logger(), "提交的数字必须大于1");
      return rclcpp_action::GoalResponse::REJECT;
    }
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE; //封装好了三种返回值:接受并执行,接受并延迟,拒绝
     /* 
      如果接受，ROS 2 会创建一个 唯一的目标句柄对象（GoalHandleProgress），并存储在服务器内部,也就是其他三个回调函数参数列表生成的指针(指向同一个对象)
      整个程序的 std::shared_ptr<GoalHandleProgress> xxx 实例化都指向同一个对象 
     */
  }

  // 3-3.处理取消任务请求
  /* 
    std::function<cancelresponse(std::shared_ptr<servergoalhandle<actiont>>)>;
  */
  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleProgress> goal_handle)
  {
    (void)goal_handle;
    RCLCPP_INFO(this->get_logger(), "接收到任务取消请求");
    return rclcpp_action::CancelResponse::ACCEPT; // 封装好了两种返回值:接受,拒绝 ; 
    // GoalHandleProgress的成员函数 bool cancel_requested_;   取消标志位
  }

  // 3-4.处理任务
  void execute(const std::shared_ptr<GoalHandleProgress> goal_handle)
  {
    // 1.生成连续反馈返回给客户端
      /* 
        inline void GoalHandleProgress::publish_feedback(std::shared_ptr<base_interfaces_demo::action::Progress_Feedback> feedback_msg)
                                                                                                      = Progress::Feedback
        */
    RCLCPP_INFO(this->get_logger(), "开始执行任务");
    rclcpp::Rate loop_rate(10.0);  // 和loop_rate.sleep();搭配,在完成循环之后休眠线程,以达到某线程以固定频率(单位为HZ)运行(线程可能超时,从而降低运行频率)
    const auto goal = goal_handle->get_goal();  // get_goal()返回指向Progress动作接口中Goal结构体的指针
                                    //该指针指向的结构体与Result和Feedback是独立的,只不过这三个是在同一个文件中定义的,但编译之后就是三个独立结构体了
    auto result = std::make_shared<Progress::Result>();  //生成指向Progress动作接口中Result结构体的指针,但没有现成函数,得自己创建指针
    auto feedback = std::make_shared<Progress::Feedback>(); //生成指向Progress动作接口中Feedback结构体的指针
    int64_t sum = 0;
    for (int i = 1; (i <= goal->num) && rclcpp::ok(); i++)
    {
      sum += i;
      // 检查是否中途取消任务
       /* ******************************************** */
      if (goal_handle->is_canceling())  //goal_handle->is_canceling() 返回句柄的取消标志位
      {
        result->sum = sum;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "任务取消");
        return;
      }
      /* ******************************************** */

      feedback->progress = (double_t)i / goal->num;  // feedback->progress由自定义的动作信息中的变量名决定,他是一个变量,progress和Progress这个动作接口不同
      goal_handle->publish_feedback(feedback); // 连续反馈核心操作:GoalHandleProgress的成员函数,接收指向Progress动作接口中Feedback结构体的指针,并发布
      RCLCPP_INFO(this->get_logger(), "连续反馈中,进度:%.2f", feedback->progress);

      loop_rate.sleep();
    }

    if (rclcpp::ok())
    {
      result->sum = sum;
      // 2.生成最响应结果
      /* 
      inline void GoalHandleProgress::succeed(std::shared_ptr<base_interfaces_demo::action::Progress_Result> result_msg)
      */
      goal_handle->succeed(result); //生成最终响应核心操作
      RCLCPP_INFO(this->get_logger(), "任务完成!");
    }
  }

  // 3-5.生成连续反馈
  /* 
    std::function<void (std::shared_ptr<ServerGoalHandle<ActionT>>)>;
  */
  void handle_accepted(const std::shared_ptr<GoalHandleProgress> goal_handle)
  {
    //新建子线程处理耗时的主逻辑实现
    std::thread{std::bind(&MiniActionServer::execute, this, _1), goal_handle}.detach();  //最好用joint()
  }

public:
  // 3-1.创建动作服务端
  explicit MiniActionServer(const rclcpp::NodeOptions &options = rclcpp::NodeOptions())
      : Node("mini_action_server", options)  //相比服务通信的构造函数,节点参数多了options
  {
    // 实例化动作服务对象
    /*
      template<typename ActionT> //动作通信消息模板类
      typename Server<ActionT>::SharedPtr create_server(  //返回值和函数名
      rclcpp::Node::SharedPtr node,  //节点指针:一般用this
      const std::string & name,   //动作通信话题名称
      typename Server<ActionT>::GoalCallback goal_callback,  //三个回调函数:goal,cancel,accepted
      typename Server<ActionT>::CancelCallback cancel_callback,
      typename Server<ActionT>::AcceptedCallback accepted_callback,
      const rcl_action_server_options_t & options = rcl_action_server_get_default_options()  //高级选项
      );的
    */
    this->action_server_ = rclcpp_action::create_server<Progress>(
        this,  //节点指针
        "get_sum",  //动作通信话题名
        std::bind(&MiniActionServer::handle_goal, this, _1, _2),  //处理提交的目标值
        std::bind(&MiniActionServer::handle_cancel, this, _1),  //处理取消请求
        std::bind(&MiniActionServer::handle_accepted, this, _1)); //生成连续响应和最终反馈

    RCLCPP_INFO(this->get_logger(), "动作服务端创建,等待请求……");
  }
  ~MiniActionServer();
};

MiniActionServer::~MiniActionServer()
{
}

int main(int argc, char **argv)
{
  // 2.初始化ros2动作通信客户端节点
  rclcpp::init(argc, argv);

  // 4.调用spin函数,并传入节点对象指针
  auto action_sever = std::make_shared<MiniActionServer>();
  rclcpp::spin(action_sever);
  rclcpp::shutdown();
  return 0;
}
