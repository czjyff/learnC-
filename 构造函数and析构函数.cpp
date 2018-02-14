#include <iostream>
#include <cstring>

using namespace std;

class line
{
    public:
        line(int x):a(x){ cout << "object begins.\n";};  //构造函数（创建对象时执行）
        void display();
        ~line(){ cout << "object ends.\n";} //析构函数（释放对象时执行）
    private:
        int a;
};
void line::display()
{
    cout << a <<endl;
}

int main()
{
    int n;
    cin >> n;
    line lan(n);
    lan.display();
    return 0;
}
