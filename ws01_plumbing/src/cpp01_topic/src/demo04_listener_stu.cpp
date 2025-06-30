/* 
    需求:订阅发布方发布的学生信息,并输出到终端
*/

//1.包含头文件
#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/student.hpp"

using base_interfaces_demo::msg::Student;
using std::placeholders::_1;

class MiniSubscriber : public rclcpp::Node
{
private:
    void topic_callback(const Student & msg) const
    {
        RCLCPP_INFO(this->get_logger(), "订阅的学生信息:姓名:%s,年龄:%d,身高:%.2f", msg.name.c_str(), msg.age, msg.height);
    }
    rclcpp::Subscription<Student>::SharedPtr subscriber_;
public:
    MiniSubscriber(/* args */);
    ~MiniSubscriber();
};

MiniSubscriber::MiniSubscriber() : Node("student_subscriber")
{
    subscriber_ = this->create_subscription<Student>("topic_stu", 10, std::bind(&MiniSubscriber::topic_callback, this, _1));
}

MiniSubscriber::~MiniSubscriber()
{
}


int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared <MiniSubscriber>());
    rclcpp::shutdown();
    return 0;
}