#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;
int book[100005], a[100005]={0};
int next[2] = {97,-127};
int t = 10001;
int s = 10000;
void bfs()
{
    memset(book,0,sizeof(book));
    queue<int> que;
    que.push(s);
    book[s] = 1;
    a[s] = 0;
    while( !que.empty() )
    {
        int b = que.front();
        if( b==t )
        {
            cout << a[t] <<endl;
            break;
        }
        que.pop();
        int tmp = b;
        for( int i=0; i<2; i++ )
        {
            tmp = b+next[i];
            if( book[tmp]==0&&tmp>=0&&tmp<100000 )
            {
                book[tmp]=1;
                a[tmp] = a[b]+1;
                que.push(tmp);
            }
        }
    }
}

int main()
{
    bfs();
    return 0;
}

