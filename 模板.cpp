#include <iostream>
using namespace std;

// 函数模板不能缩短可执行程序，对于下面这个程序，最终将由两个独立的函数定义。
template <typename T>
void swap1( T &a, T &b );

int main()
{
    int a = 10, b = 20;
    cout << "原来的a: " <<a << "    b :    " <<b<<endl;
    swap1(a,b);
    cout << "now a:   " << a<< "    b :    " <<b<<endl<<endl;

    double x=22.5, y=88.3;
    cout << "原来的x: " <<x << "    y :    " <<y<<endl;
    swap1(x,y);
    cout << "now x:   " << x<< "    y :    " <<y<<endl;
    return 0;
}

template <typename T>
void swap1( T &a, T &b )
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
