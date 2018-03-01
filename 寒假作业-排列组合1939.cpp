#include <iostream>
#include <cstring>
using namespace std;
int a[14],book[14];
int cnt=0;

void dfs(int step )
{
    if( step>2&&a[0]+a[1]!=a[2] )
        return;
    if( step>5&&a[3]-a[4]!=a[5] )
        return;
    if( step>8&&a[6]*a[7]!=a[8] )
        return;
    if( step>11&&a[10]*a[11]==a[9] )
    {
        cnt++;
        return;
    }
    else
    {
        for(int i=1; i<=13; i++ )
        {
            if( book[i]==0 )
            {
                a[step] = i;
                book[i] = 1;
                dfs( step+1 );
                book[i] = 0;
            }
        }
    }
    return;

}

int main()
{
    memset(book,0,sizeof(book));
    dfs(0);
    cout << cnt <<endl;
    return 0;
}
