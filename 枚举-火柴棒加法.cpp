#include <iostream>
using namespace std;

int fun(int x)
{
    int num = 0;
    int f[10] = {6,2,5,5,4,5,6,3,7,6}; // ��0����9����Ļ���
    while( x/10!=0 )
    {
        num += f[x%10];
        x /= 10;
    }
    num += f[x];
    return num;
}
int main()
{
    int n,c,sum=0;
    cout << "���������еĻ������� \n";
    cin >> n;
    for( int a=0; a<1111; a++ )
    {
        for( int b=0; b<1111 ; b++ )
        {
            c = a+b;
            if( fun(a) + fun(b) + fun(c) == n-4 )
            {
                cout << a << '+' << b << '=' << c <<endl;
                sum++;
            }
        }
    }
    cout << n <<"������һ������ƴ��" << sum << "����ͬ�ĵ�ʽ\n";
    return 0;
}
