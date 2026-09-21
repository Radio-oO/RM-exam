#include <iostream>
#include <string>
using namespace std;


    class Car
    {
    private:
        string color;
        int number;

    public:
        // 构造函数
        Car(string c, int n)
        {
            color = c;
            number = n;
        }

        // 析构函数
        ~Car()
        {
            cout << "一辆车被销毁了" << endl;
        }

        // 输出车辆信息
        void display()
        {
            cout << "颜色：" << color << "，车牌：" << number << endl;
        }
    };

    int main() {
        // 创建2个车辆对象
        Car car1("红色", 1234);
        Car car2("黑色", 5678);

        // 输出车辆信息
        car1.display();
        car2.display();

        return 0;
    }
