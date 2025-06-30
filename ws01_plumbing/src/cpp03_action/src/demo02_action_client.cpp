/*  
  需求：编写动作客户端实现，可以提交一个整型数据到服务端，并处理服务端的连续反馈以及最终返回结果。
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    3.定义节点类；
      3-1.创建动作客户端；
      3-2.发送请求；
      3-3.处理目标发送后的反馈；(回调函数)
      3-4.处理连续反馈；(回调函数)
      3-5.处理最终响应。(回调函数)
    4.调用spin函数，并传入节点对象指针；
    5.释放资源。
*/
// 1.包含头文件；
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfaces_demo/action/progress.hpp"

using base_interfaces_demo::action::Progress;
using GoalHandleProgress = rclcpp_action::ClientGoalHandle<Progress>;
using namespace std::placeholders;
// using namespace std::chrono_literals; 用于在后面直接用10s代替std::chrono::seconds(10)

// 3.定义节点类；
class MinimalActionClient : public rclcpp::Node
{
public:

  explicit MinimalActionClient(const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions())
  : Node("minimal_action_client", node_options)
  {
    // 3-1.创建动作客户端；
    /* 
    std::shared_ptr<...> 
    rclcpp_action::create_client<...>(MinimalActionClient *node, 
    const std::string &name, 
    rclcpp::CallbackGroup::SharedPtr group = nullptr, 
    const rcl_action_client_options_t &options = rcl_action_client_get_default_options())
    */
    this->client_ptr_ = rclcpp_action::create_client<Progress>(this,"get_sum");
  }

  // 3-2.发送请求；
  void send_goal(int64_t num)
  {
    if (!this->client_ptr_) {
      RCLCPP_ERROR(this->get_logger(), "动作客户端未被初始化。");
    }
    // 连接服务端
    if (!this->client_ptr_->wait_for_action_server(std::chrono::seconds(10))) {
      RCLCPP_ERROR(this->get_logger(), "服务连接失败！");
      return;
    }

    auto goal_msg = Progress::Goal();  //动作信息中Goal类型结构体的对象
    goal_msg.num = num;
    RCLCPP_INFO(this->get_logger(), "发送请求数据！");

    auto send_goal_options = rclcpp_action::Client<Progress>::SendGoalOptions();
    send_goal_options.goal_response_callback =std::bind(&MinimalActionClient::goal_response_callback, this, _1);
    send_goal_options.feedback_callback =std::bind(&MinimalActionClient::feedback_callback, this, _1, _2);
    send_goal_options.result_callback =std::bind(&MinimalActionClient::result_callback, this, _1);
     /* 
    inline std::shared_future<...> 
    rclcpp_action::Client<...>::async_send_goal(
    const base_interfaces_demo::action::Progress::Goal &goal, 
    const rclcpp_action::Client<...>::SendGoalOptions &options)
    */
    //  发送目标的核心代码,上面7行是为这行服务的
    auto goal_handle_future = this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<Progress>::SharedPtr client_ptr_;

  // 3-3.处理目标发送后的反馈；
  /*
  SendGoalOptions定义中:
  using GoalHandle = ClientGoalHandle<ActionT>;
  using GoalResponseCallback = std::function<void (typename GoalHandle::SharedPtr)>;
  其中:ClientGoalHandle<ActionT>已经在程序开头声明过为:GoalHandleProgress
  */
  //  goal_handle 如果目标被接受,是一个有效指针（指向一个GoalHandleProgress对象）;如果被拒绝是一个空指针（nullptr）
  void goal_response_callback(GoalHandleProgress::SharedPtr goal_handle)
  {
    if (!goal_handle) //  智能指针重载了operator bool()，当指针为空时返回false
    {
      RCLCPP_ERROR(this->get_logger(), "目标请求被服务器拒绝！");
    } 
    else 
    {
      RCLCPP_INFO(this->get_logger(), "目标被接收，等待结果中");
    }
  }

  // 3-4.处理连续反馈；
  /* 
  SendGoalOptions定义中:
  using GoalHandle = ClientGoalHandle<ActionT>;
  using FeedbackCallback = typename GoalHandle::FeedbackCallback;
  ClientGoalHandle定义中:
  FeedbackCallback =
    std::function<void (
        typename ClientGoalHandle<ActionT>::SharedPtr,
        const std::shared_ptr<const Feedback>)>;
  */
  void feedback_callback(GoalHandleProgress::SharedPtr goal_handle,const std::shared_ptr<const Progress::Feedback> feedback)
  {
    (void)goal_handle;
    int32_t progress = (int32_t)(feedback->progress * 100);
    RCLCPP_INFO(this->get_logger(), "当前进度: %d%%", progress);
  }

  // 3-5.处理最终响应。
  /* 
  寻找方法同上
  using ResultCallback = std::function<void (const WrappedResult & result)>;

    struct WrappedResult
  {
    /// The unique identifier of the goal
    GoalUUID goal_id;
    /// A status to indicate if the goal was canceled, aborted, or suceeded
    ResultCode code;
    /// User defined fields sent back with an action
    typename ActionT::Result::SharedPtr result;
  };
  */
  void result_callback(const GoalHandleProgress::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(this->get_logger(), "任务被中止");
        return;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(this->get_logger(), "任务被取消");
        return;
      default:
        RCLCPP_ERROR(this->get_logger(), "未知异常");
        return;
    }

    RCLCPP_INFO(this->get_logger(), "任务执行完毕，最终结果: %ld", result.result->sum);
  }
}; 

int main(int argc, char ** argv)
{
  if(argc!=2)
  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "清提交一个整形数据!");
    return 1;
  }
  // 2.初始化 ROS2 客户端；
  rclcpp::init(argc, argv);

  // 4.调用send_goal和spin函数；
  auto action_client = std::make_shared<MinimalActionClient>();
  // action_client->send_goal(10);
  action_client->send_goal(atoi(argv[1]));
  rclcpp::spin(action_client);
/* 
rclcpp::spin(std::make_shared<MinimalActionClient>());
直接这样写只会调用构造函数
*/

  // 5.释放资源。
  rclcpp::shutdown();
  return 0;
}