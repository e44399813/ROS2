/*  
  需求：编写服务端，接收客户端发送请求，提取其中两个整型数据，相加后将结果响应回客户端。
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    3.定义节点类；
      3-1.创建服务端；
      3-2.处理请求数据并响应结果。
    4.调用spin函数，并传入节点对象指针；
    5.释放资源。
*/

#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/srv/add_ints.hpp"

using base_interfaces_demo::srv::AddInts;

using std::placeholders::_1;
using std::placeholders::_2;

class MiniService : public rclcpp::Node
{
private:
  void add(const AddInts::Request::SharedPtr req,const AddInts::Response::SharedPtr res)
  {
    //设置好之后Response这个东西会自动发给客户端
    res->sum = req->num1 + req->num2;
    RCLCPP_INFO(this->get_logger(), "请求数据:(%d,%d),响应结果:%d", req->num1, req->num2, res->sum);
  }
  rclcpp::Service<AddInts>::SharedPtr server_;

public:
  MiniService(/* args */);
  ~MiniService();
};

MiniService::MiniService(/* args */) : Node("mini_service")
{
  // 3-1.创建服务端;
  /*
      模板:服务接口类型;
      参数:
        1.服务话题
        2.回调函数
      返回值:服务对象指针
  */
  server_ = this->create_service<AddInts>("add_ints", std::bind(&MiniService::add, this, _1, _2));
  RCLCPP_INFO(this->get_logger(),"add_ints 服务端启动完毕，等待请求提交...");
}

MiniService::~MiniService()
{
}


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MiniService>());
  rclcpp::shutdown();
  return 0;
}
