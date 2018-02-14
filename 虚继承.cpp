/*
   通过虚继承解决钻石继承带来的问题
*/
#include <stdio.h>
#include <iostream>
using namespace std;

class A
{
public:
    A(int data) : m_data(data)
    {
        cout << "A构造 : " << this << endl;
    }
protected:
    int m_data;
};

class X : virtual public A
{
public:
    X(int data) : A(data)
    {
        cout << "X构造 : " << this << endl;
    }
    int getData(void) const
    {
        return m_data;
    }
};

class Y : virtual public A
{
public:
    Y(int data) : A(data)
    {
        cout << "Y构造 : " << this << endl;
    }
    void setData(int data)
    {
        m_data = data;
    }
};

class Z : public X, public Y
{
public:
    // 注意，采用虚继承的话，必须在汇聚子类的构造函数中显示的初始化公共基类，否则公共基类会调用缺省构造
    Z(int data) : X(data), Y(data), A(data)
    {
        cout << "Z构造 : " << this << endl;
    }
};

int main(void)
{
    Z z(0);
    z.setData(100);
    cout << "m_data = " << z.getData() << endl;

    return 0;
}
