#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
void swap1( T &a, T &b );

template <typename T>
void swap1( T *a, T *b , int n );

const int len = 8;
void show(int *p)
{
    for(int i=0; i<len; i++ )
        cout << p[i] << ' ';
    cout << endl;
}
int main()
{
    int a = 10, b = 20;
    cout << "原来的a: " <<a << "    b :    " <<b<<endl;
    swap1(a,b);
    cout << "now a:   " << a<< "    b :    " <<b<<endl<<endl;


    int c[len] = {0,1,2,3,4,5,6,7};
    int d[len] = {9,8,7,6,5,4,3,2};
    swap1(c,d,len);
    show(c);
    show(d);
    return 0;
}

// 定义函数的时候，必须都有模板声明
template <typename T>
void swap1( T &a, T &b )
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap1( T a[] , T b[] , int n)
{
    T temp;
    for(int i=0; i<n; i++ )
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
