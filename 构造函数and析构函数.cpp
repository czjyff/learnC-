#include <iostream>
#include <cstring>

using namespace std;

class line
{
    public:
        line(int x):a(x){ cout << "object begins.\n";};  //���캯������������ʱִ�У�
        void display();
        ~line(){ cout << "object ends.\n";} //�����������ͷŶ���ʱִ�У�
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
