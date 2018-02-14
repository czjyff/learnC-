#include <iostream>

using namespace std;
int c=0;
void hannuo( int n, char beginp, char mid, char endp)
{
    if( 1==n )
        cout << ++c << ": " <<beginp<<" -> " << endp <<endl;
    else
    {
        hannuo( n-1, beginp, endp, mid );
        cout << ++c << ": " <<beginp<<" -> " << endp <<endl;
        hannuo( n-1, mid, beginp, endp);
    }
}
int main()
{
    int n;
    cout << "请输入有多少盘子：\n";
    cin >> n;
    char x,y,z;
    hannuo(n, 'x', 'y', 'z' );
    cout << "一共移动了：" <<c<<"次\n";
    return 0;
}
