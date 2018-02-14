#include <iostream>
using namespace std;

int fun(int x)
{
    int num = 0;
    int f[10] = {6,2,5,5,4,5,6,3,7,6}; // 从0——9多需的火柴棒
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
    cout << "请输入手中的火柴棒数： \n";
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
    cout << n <<"个火柴棒一共可以拼成" << sum << "个不同的等式\n";
    return 0;
}
