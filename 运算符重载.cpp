#include <iostream>
using namespace std;

class fushu
{
    public:
        void setshi()
        {
            cin >> shi;
        }
        void setxu()
        {
            cin >> xu;
        }
        void display();
        fushu operator+(const fushu& x);
    private:
        int shi;
        int xu;
};
void fushu::display()
{
    cout << '(' << shi << ',' << xu << 'i' << ')' << endl;
}
fushu fushu::operator+(const fushu& x)
{
    fushu n;
    n.shi = this->shi + x.shi;
    n.xu = this->xu + x.xu;
    return n;
}


int main()
{
    fushu first, second, third;
    cout << "请输入第一个复数的实部和虚部：";
    first.setshi();
    first.setxu();
    cout << "请输入第二个复数的实部和虚部：";
    second.setshi();
    second.setxu();
    third = first + second;
    cout << "和为：\n";
    third.display();
    return 0;
}
