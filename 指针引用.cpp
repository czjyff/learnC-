#include <iostream>
using namespace std;

void hha(int **s)
{
    *s = new int;
    cout <<"�ں�����p��Ϊ��  " <<(*s) <<endl;
    *(*s) = 3;
//    delete *s;
}

void hhb(int* &s)
{
    s = new int ;
    cout << "�ں�����y��Ϊ��" << s <<endl;
    *s = 4;
}

int main()
{
    int a = 1, b = 2 ;
    int *p = &a;
    int *y = &b;

    cout << "��ʼp�ǣ�" << p <<endl;
    hha(&p);
    cout << "����������p��:  " <<p <<endl;
    cout << "p��ָ���ֵ�ǣ�" << *p <<endl;
    cout << "a��ֵ��" << a <<endl;
    delete p;

    cout << endl <<endl;
    cout << "��ʼy�ǣ�" << y <<endl;
    hhb(y);
    cout << "����������y��:  " <<y <<endl;
    cout << "y��ָ���ֵ�ǣ�" << *y <<endl;
    cout << "b��ֵ��" << b <<endl;
    delete y;
    return 0;
}
