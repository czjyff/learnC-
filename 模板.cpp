#include <iostream>
using namespace std;

// ����ģ�岻�����̿�ִ�г��򣬶�����������������ս������������ĺ������塣
template <typename T>
void swap1( T &a, T &b );

int main()
{
    int a = 10, b = 20;
    cout << "ԭ����a: " <<a << "    b :    " <<b<<endl;
    swap1(a,b);
    cout << "now a:   " << a<< "    b :    " <<b<<endl<<endl;

    double x=22.5, y=88.3;
    cout << "ԭ����x: " <<x << "    y :    " <<y<<endl;
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
