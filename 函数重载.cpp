#include <iostream>
#include <cstring>
using namespace std;

unsigned int left( unsigned int num , unsigned ct=1 );
char * left( const char *str , int n = 1 ); // ��Ĭ�ϲ�����Ĭ��ȡ��һλ��n = 1)

int main()
{
    string str;
    cout << "������һ���ַ�����\n";
    cin >> str;
    char * trip = &str[0];
    unsigned int n;
    cout << "������һ����������\n";
    cin >> n;

    unsigned int m;
    cout << "������Ҫ����ǰ��λ��\n";
    cin >> m;

    char *temp = left( &str[0], m );

    cout << str << "��ǰ" << m << "λ�ǣ�" << temp << endl;
    cout << n << "��ǰ" << m << "λ�ǣ�" << left( n, m );

    delete []temp; // �ͷ��ַ���ռ�õ��ڴ�
    return 0;
}

char * left( const char *str , int n )  // ������ʱ��n=1(Ĭ�ϣ��������ʱ����n=1;
{
    if( n<0 )
        n = 0;
    char *p = new char[n+1]; // �����ַ���һ��λ�ã����������temp��β�����ܻ������루��Ϊ�������ַ��Ž��������.
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
        digt++;     // getλ��

    if( digt>ct )
    {
        ct = digt - ct;
        while( ct-- )
            num/=10;
    }
    return num;
}
