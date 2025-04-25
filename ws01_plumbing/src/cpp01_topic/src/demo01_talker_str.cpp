/*
节点功能：以固定频率发送文本“，hello，world”，文本后缀编号，每发送一条信息，编号递增1
步骤：
1.头文件
2.初始化ros节点
3.定义义节点类：
    3.1.创建发布方
    3.2.创建定时器
    3.3.组织消息并发布
4.调用spin函数,并传入节点对象指针
5.释放资源
*/


// 1.包含头文件，第一条相当于ros总的头文件，只不过叫rclcpp
#include "rclcpp/rclcpp.hpp"
// 1.包含ros2自带消息类型中的string类型
#include "std_msgs/msg/string.hpp"

//std的命名空间,并且可以用ms,s等来直接表示时间
using namespace std::chrono_literals;

//3.定义节点类为继承rclcpp的Node类,此时还不用给Node传命名用的参数,在构造函数中命名节点名
class MiniPublisher : public rclcpp::Node
{
    //构造与析构函数
public:
    MiniPublisher();
    ~MiniPublisher();
private:
    void timer_callback()
    {
        // 创建要发布的信息本身,类型要和发布者的模板类型保持一致
        auto message = std_msgs::msg::String();
        message.data = "Hello,world!" + std::to_string(count_++);
        RCLCPP_INFO(this->get_logger(), "发布消息：%s", message.data.c_str());
        publisher_->publish(message);
    }
    // 定时器对象指针
    rclcpp::TimerBase::SharedPtr timer_;
    // 发布对象指针
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    // 计数器
    size_t count_;
};

MiniPublisher::MiniPublisher(): Node("minimal_publisher"),count_(0)
{
    /* 
    返回值:发布对象指针
    模板:被发布的消息类型
    参数:
        1.话题名称
        2.Qos(消息队列长度)
    */
    // 创建发布对象,并用一个对应的对象指针接收
    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    /* 
    返回值:定时器对象指针
    参数:
        1.时间间隔
        2.回调函数
    */
    // 创建定时器对象,并用一个对应的对象指针接收
    timer_ = this->create_wall_timer(500ms, std::bind(&MiniPublisher::timer_callback, this));
}

MiniPublisher::~MiniPublisher()
{
}

int main(int argc,char **argv)
{
    // 2.初始化ros节点
    rclcpp::init(argc, argv);
    //调用回调函数,并传入节点对象指针
    rclcpp::spin(std::make_shared<MiniPublisher>());
    rclcpp::shutdown();
    return 0;
}
