#include <iostream>
using namespace std;

//�����Ա�����������Ͷ����У�
//
//const�ĺ������ܶ������ݳ�Ա�����޸Ĳ�����
//
//const�Ķ��󣬲������÷�const�ĳ�Ա������

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
            //num+=10;        //����const���������޸������ݳ�Ա
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
    //a2.out1(); // ����const�ĳ�Ա ���ܷ��ʷ�const�ĺ���
    a2.out2();
    a2.out3();
    return 0;
}
