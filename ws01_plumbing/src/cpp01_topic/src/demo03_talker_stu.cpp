/* 
需求:一某个固定频率发送文本学生信息,包含学生的姓名,年龄,身高等数据.
*/

//1.包含节点类
#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/student.hpp"

using namespace std::chrono_literals;
using base_interfaces_demo::msg::Student;

//3.定义节点类
class MiniPublisher : public rclcpp::Node
{
private:
    void timer_callback()
    {
        auto stu = Student();
        stu.name = "李昊霆";
        stu.age = count_++;
        stu.height = 1.8;
        RCLCPP_INFO(this->get_logger(), "学生信息:name=%s,age=%d,height=%.2f", stu.name.c_str(), stu.age, stu.height);
        publisher_->publish(stu);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<Student>::SharedPtr publisher_;
    size_t count_;

public:
    MiniPublisher();
    ~MiniPublisher();
};

MiniPublisher::MiniPublisher() : Node("student_publisher"), count_(0)
{
    publisher_ = this->create_publisher<Student>("topic_stu", 10);
    timer_=this->create_wall_timer(500ms,std::bind(&MiniPublisher::timer_callback,this));
}

MiniPublisher::~MiniPublisher()
{
}


int main(int argc,char** argv)
{
    //2.初始化ros2客户端
    rclcpp::init(argc, argv);
    //4.调用spin函数,传入节点对象指针
    rclcpp::spin(std::make_shared<MiniPublisher>());
    //5.释放资源
    rclcpp::shutdown();
    return 0;
}