#include <rclcpp/rclcpp.hpp>
#include"std_msgs/msg/string.hpp"

using std::placeholders::_1;

class Listener:public rclcpp::Node
{
private:
    void topic_callback (const std_msgs::msg::String & msg) const
    {
        RCLCPP_INFO(this->get_logger(), "订阅信息: %s ",msg.data.c_str());
    }
    
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr Subscription_;
    
public:
    Listener();
    ~Listener();
};

Listener::Listener():Node("minimal_subscriber")
{
    RCLCPP_INFO(this->get_logger(), "订阅创建! ");
    /*
          = this->create_subscription<>(,,bind(,,));
        返回值:订阅对象指针
        模板:消息类型
        参数:
            1.话题名称
            2.Qos,队列长度
            3.bind函数(节点回调函数指针,节点指针,占位符/lambda函数)回调函数(具体处理消息的函数)
    */
    Subscription_ = this->create_subscription<std_msgs::msg::String>("topic", 10, std::bind(&Listener::topic_callback, this,_1));
}

Listener::~Listener()
{
}


int main(int argc,char **argv)
{
    // 2.初始化节点
    rclcpp::init(argc,argv);
    // 4.调用spin函数,传入节点对象指针
    rclcpp::spin(std::make_shared<Listener>());
    // 3.释放资源
    rclcpp::shutdown();
    return 0;
}