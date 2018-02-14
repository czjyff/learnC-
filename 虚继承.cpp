/*
   ͨ����̳н����ʯ�̳д���������
*/
#include <stdio.h>
#include <iostream>
using namespace std;

class A
{
public:
    A(int data) : m_data(data)
    {
        cout << "A���� : " << this << endl;
    }
protected:
    int m_data;
};

class X : virtual public A
{
public:
    X(int data) : A(data)
    {
        cout << "X���� : " << this << endl;
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
        cout << "Y���� : " << this << endl;
    }
    void setData(int data)
    {
        m_data = data;
    }
};

class Z : public X, public Y
{
public:
    // ע�⣬������̳еĻ��������ڻ������Ĺ��캯������ʾ�ĳ�ʼ���������࣬���򹫹���������ȱʡ����
    Z(int data) : X(data), Y(data), A(data)
    {
        cout << "Z���� : " << this << endl;
    }
};

int main(void)
{
    Z z(0);
    z.setData(100);
    cout << "m_data = " << z.getData() << endl;

    return 0;
}
