/*
    需求：编写参数客户端，获取或修改服务端参数。
    步骤：
        1.包含头文件；
        2.初始化 ROS2 客户端；
        3.定义节点类；
            3-1.查询参数；
            3-2.修改参数；
        4.创建节点对象指针，调用参数操作函数；
        5.释放资源。
*/

// 1.包含头文件；
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class MiniParamClient:public rclcpp::Node
{
private:
   rclcpp::SyncParametersClient::SharedPtr paramClient_;
public:
    MiniParamClient(/* args */);
    ~MiniParamClient();

    bool connect_server()
    {
        // 等待服务连接
        while (!paramClient_->wait_for_service(1s))
        {
            if (!rclcpp::ok())
            {
                return false;
            }
            RCLCPP_INFO(this->get_logger(), "服务未连接");
        }

        return true;
    }

    // 3-1.查询参数；
    void get_param()
    {
        RCLCPP_INFO(this->get_logger(), "-----------参数客户端查询参数-----------");
        double height = paramClient_->get_parameter<double>("height"); //与服务端的用法不一样
        RCLCPP_INFO(this->get_logger(), "height = %.2f", height);
        RCLCPP_INFO(this->get_logger(), "car_type 存在吗？%d", paramClient_->has_parameter("car_type"));
        auto params = paramClient_->get_parameters({"car_type", "height", "wheels"});
        for (auto &param : params)
        {
            RCLCPP_INFO(this->get_logger(), "%s = %s", param.get_name().c_str(), param.value_to_string().c_str());
        }
    }

    // 3-2.修改参数；
    void update_param()
    {
        RCLCPP_INFO(this->get_logger(), "-----------参数客户端修改参数-----------");
        paramClient_->set_parameters({rclcpp::Parameter("car_type", "Mouse"),
                                     rclcpp::Parameter("height", 2.0),
                                     // 这是服务端不存在的参数，只有服务端设置了rclcpp::NodeOptions().allow_undeclared_parameters(true)时，
                                     //  这个参数才会被成功设置。
                                     rclcpp::Parameter("width", 0.15),
                                     rclcpp::Parameter("wheels", 6)});
    }
};

MiniParamClient::MiniParamClient(/* args */):Node("mini_param_client")
{
    // 服务通信通过服务话题关联,参数服务通信的客户端通过参数服务的节点名称关联
    // 原因:1.参数服务通信的服务端启动后,底层封装了多个服务通信(导致存在多个话题,不好一一关联)
    //     2.上述一个参数服务的服务端对应的服务话题格式: 服务端节点名称/XXXX
    //     3.参数服务通信的客户端要封装多个服务通信话题对应起来
    paramClient_ = std::make_shared<rclcpp::SyncParametersClient>(this, "mini_param_server");
}

MiniParamClient::~MiniParamClient()
{
}


int main(int argc, char const *argv[])
{
    // 2.初始化 ROS2 客户端；
    rclcpp::init(argc, argv);

    // 4.创建节点对象指针，调用参数操作函数；
    auto paramClient = std::make_shared<MiniParamClient>();
    bool flag = paramClient->connect_server();
    if (!flag)
    {
        return 0;
    }
    paramClient->get_param();
    paramClient->update_param();
    paramClient->get_param();
}