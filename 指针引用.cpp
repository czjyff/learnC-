#include <iostream>
using namespace std;

void hha(int **s)
{
    *s = new int;
    cout <<"在函数中p变为：  " <<(*s) <<endl;
    *(*s) = 3;
//    delete *s;
}

void hhb(int* &s)
{
    s = new int ;
    cout << "在函数中y变为：" << s <<endl;
    *s = 4;
}

int main()
{
    int a = 1, b = 2 ;
    int *p = &a;
    int *y = &b;

    cout << "初始p是：" << p <<endl;
    hha(&p);
    cout << "跳出函数后p是:  " <<p <<endl;
    cout << "p所指向的值是：" << *p <<endl;
    cout << "a的值：" << a <<endl;
    delete p;

    cout << endl <<endl;
    cout << "初始y是：" << y <<endl;
    hhb(y);
    cout << "跳出函数后y是:  " <<y <<endl;
    cout << "y所指向的值是：" << *y <<endl;
    cout << "b的值：" << b <<endl;
    delete y;
    return 0;
}
