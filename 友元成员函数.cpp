#include <iostream>
using namespace std;

// ��Ԫ�������Է������е�˽�г�Ա���������ݣ����Ƿ��ʲ���ֱ��ʹ�����ݳ�Ա����Ҫͨ���Զ����������
// һ�����еĳ�Ա��������������һ�������Ԫ����������һ�����������Ƕ������Ԫ����
class A;
class B
{
    public:
        void display(A &h);  //�����ᵽ��A�������ڿ�ʼ��ʱ��������A��
    private:
        string name="����B���˽������";
};

class A
{
    public:
        friend void B::display(A &h);   // ����B�ĳ�Ա����display()��A����Ԫ��������B�еĳ�Ա�������Է���A��˽�г�Ա��
    private:
        string a = "����A���˽������";
};

void B::display(A &h)
{
    cout << "B���˽�����ݣ�" << name << endl;
    cout << "A���˽�����ݣ�" << h.a ;
}

int main()
{
    A ok;

    B we;
    we.display(ok); // ͨ������B�ĳ�Ա����������A
    cout << endl;
    return 0;
}


