#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int test(int t)
{
    for( int i=2; i*i<t; i++ )
    {
        if( t%i==0 )
            return 0;
    }
    return 1;
}
int main()
{
    int a[20],k=0;
    int n;
    cin >> n;
    int n2 = n;
    for( int i=2; i<=n ; i++ )
    {
        if( test(i)&&n%i==0 )
        {
            while (n%i==0)
            {
                a[k++] = i;
                n /= i;
            }
        }
    }
    cout<<n2<<'=';
    for(int i=0; i<k-1; i++ )
        cout << a[i]<<'*';
    cout<<a[k-1];
    return 0;
}
