#include <iostream>
using namespace std;

//在类成员函数的声明和定义中，
//
//const的函数不能对其数据成员进行修改操作。
//
//const的对象，不能引用非const的成员函数。

class aa{

    int num;

    public:
        aa(){
            int b =10;
            num = b;
        };
        void out1(){
            cout<<num<<endl;
        }
        void out2() const{
            cout<<num<<endl;
        }
        void out3() const{
            //num+=10;        //出错，const函数不能修改其数据成员
            cout<<num<<endl;
        }

};
int main()
{
    aa a1;
    a1.out1();
    a1.out2();
    a1.out3();
    const aa a2;
    //a2.out1(); // 错误，const的成员 不能访问非const的函数
    a2.out2();
    a2.out3();
    return 0;
}
