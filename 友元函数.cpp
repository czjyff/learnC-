#include <iostream>

using namespace std;

class A
{
    public:
        friend void display(A &h);
        void seta()
        {  cin >> a;  }
    private:
        int a=3;
};

void display(A &h)
{
    cout << h.a ;
}

int main()
{
    A we;
    we.seta();
    display(we);
    return 0;
}
