/*  
  需求：编写客户端，发送两个整型变量作为请求数据，并处理响应结果。
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    3.定义节点类；
      3-1.创建客户端；
      3-2.连接服务器(,对于服务通信而言,如果连不到,那不能发送请求)；
      3-3.组织请求数据并发送；
    4.创建对象指针 调用其功能(连接服务器函数,发送函数,响应函数)；
    5.释放资源。

*/
//1.包含头文件
#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/srv/add_ints.hpp"

using base_interfaces_demo::srv::AddInts;
using namespace std::chrono_literals;

//3.自定义节点类
class MiniClient : public rclcpp::Node
{
private:
    rclcpp::Client<AddInts>::SharedPtr client_;

public:
    MiniClient(/* args */);
    ~MiniClient();

    /* 
        连接服务器函数
        参数:无
        返回值:成功true,失败false

        核心代码:client_->wait_for_service(1s)
        参数:超时时间
        返回值:成功true,失败或超时false
        功能:让特定客户端在超时时间内自动连接服务端
    */
    bool connect_server()
    {
        while(!client_->wait_for_service(1s))
        {
            //判断ctrl + c 按下
            //按下ctrl + c 意味着释放节点资源,关闭contex
            if(!rclcpp::ok())
            {
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "强制退出");
                return false;
            }

            RCLCPP_INFO(this->get_logger(), "服务连接中,请稍候……");
        }

        return true;
    }

    //3-3.发送
    /*
        发送函数
        参数:两个整形变量
        返回值:提交后服务端的返回结果

        核心代码:async_send_request();
        返回值:rclcpp::Client<base_interfaces_demo::srv::AddInts>::FutureAndRequestId
        参数:std::shared_ptr<base_interfaces_demo::srv::AddInts_Request> request
   */
    rclcpp::Client<AddInts>::FutureAndRequestId send_request(int32_t num1,int32_t num2)
    {
        auto request = std::make_shared<AddInts::Request>();
        request->num1 = num1;
        request->num2 = num2;
        return client_->async_send_request(request);
    }
};

MiniClient::MiniClient(/* args */) : Node("mini_client")
{
    // 3-1.创建客户端;
    /*
        模板:服务接口
        参数:服务话题名称
        返回值:服务对象指针
    */
    client_ = this->create_client<AddInts>("add_ints");
    RCLCPP_INFO(this->get_logger(),"客户端创建，等待连接服务端！");
}

MiniClient::~MiniClient()
{
}


int main(int argc,char ** argv)
{
    if(argc!= 3)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "清提交两个整数");
        return 1;
    }
    
    //2.初始化客户端节点
    rclcpp::init(argc, argv);

    auto client = std::make_shared<MiniClient>();

    //调用连接服务器函数,并做处理
    bool flag = client->connect_server();
    //如果失败,打印信息并结束程序
    if(!flag)
    {
        //如果连接服务器函数失败是由于ctrl + c导致的,那么此时节点资源已被释放,contex已不能用
        //所以不能用client->get_logger
        //RCLCPP_INFO(client->get_logger(),"服务连接失败！");
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "服务连接失败！");
        return 0;
    }
    //如果成功进行下一步处理

    //调用发送函数并接受相应结果
    auto response = client->send_request(std::stoi(argv[1]), std::stoi(argv[2]));
    // 处理响应结果
    /* 
        核心代码1:spin_until_future_complete
        参数:当前节点指针,发送函数返回值的接受对象
        返回值:rclcpp::FutureReturnCode的三种状态

        核心代码:rclcpp::FutureReturnCode::INTERRUPTED或SUCCESS或TIMEOUT
    */
    if(rclcpp::spin_until_future_complete(client,response) == rclcpp::FutureReturnCode::SUCCESS/* 此处有三种状态:成功,中断,超时 */)
    {
        RCLCPP_INFO(client->get_logger(), "请求正常处理");
        RCLCPP_INFO(client->get_logger(), "响应结果:%d",response.get()->sum);   
    }else{
        RCLCPP_INFO(client->get_logger(), "请求异常");
    }

    rclcpp::shutdown();
    return 0;
}