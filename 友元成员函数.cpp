#include <iostream>
using namespace std;

// 友元函数可以访问类中的私有成员和其他数据，但是访问不可直接使用数据成员，需要通过对对象进行引用
// 一个类中的成员函数可以是另外一个类的友元函数，而且一个函数可以是多个类友元函数
class A;
class B
{
    public:
        void display(A &h);  //这里提到了A，所以在开始的时候先声明A。
    private:
        string name="我是B类的私有数据";
};

class A
{
    public:
        friend void B::display(A &h);   // 声明B的成员函数display()是A的友元函数。则B中的成员函数可以访问A的私有成员。
    private:
        string a = "我是A类的私有数据";
};

void B::display(A &h)
{
    cout << "B类的私有数据：" << name << endl;
    cout << "A类的私有数据：" << h.a ;
}

int main()
{
    A ok;

    B we;
    we.display(ok); // 通过调用B的成员函数来访问A
    cout << endl;
    return 0;
}


