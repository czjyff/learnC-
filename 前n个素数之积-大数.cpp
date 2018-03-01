#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
const int N = 1500000;
bool a[N+3];
vector<int> prime;
int n;

void getprime()
{
    int cnt=0;
    memset( a, true, sizeof(a) );
    for(int i=2; cnt<n; i++)
    {
        if( a[i] )
        {
            prime.push_back(i);
            cnt++;
            for( int j=2; j*i<=N; j++ )
                a[j*i] = false;
        }
    }
}

int main()
{
    cin >> n;
    unsigned long long sum = 1;
    getprime();
    for( int i=0; i<n; i++ )
        sum = ( (sum%50000)*(prime[i]%50000) )%50000;

    cout << sum <<endl;
    return 0;
}
