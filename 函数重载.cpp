#include <iostream>
#include <cstring>
using namespace std;

unsigned int left( unsigned int num , unsigned ct=1 );
char * left( const char *str , int n = 1 ); // 带默认参数，默认取第一位（n = 1)

int main()
{
    string str;
    cout << "请输入一个字符串：\n";
    cin >> str;
    char * trip = &str[0];
    unsigned int n;
    cout << "请输入一个正整数：\n";
    cin >> n;

    unsigned int m;
    cout << "请输入要保留前几位：\n";
    cin >> m;

    char *temp = left( &str[0], m );

    cout << str << "的前" << m << "位是：" << temp << endl;
    cout << n << "的前" << m << "位是：" << left( n, m );

    delete []temp; // 释放字符串占用的内存
    return 0;
}

char * left( const char *str , int n )  // 声明的时候n=1(默认），定义的时候不能n=1;
{
    if( n<0 )
        n = 0;
    char *p = new char[n+1]; // 给空字符留一个位置，否则输出的temp的尾部可能会有乱码（因为遇到空字符才结束输出）.
    int i;
    for( i=0; i < n && str[i]; i++)
        p[i] = str[i];
    while( i<=n )
        p[i++] = '\0';
    return p;
}

unsigned int left( unsigned int num , unsigned ct )
{
    unsigned digt = 1;

    if( num==0||ct==0 )
        return 0;

    unsigned int n = num;
    while( n/=10 )
        digt++;     // get位数

    if( digt>ct )
    {
        ct = digt - ct;
        while( ct-- )
            num/=10;
    }
    return num;
}
