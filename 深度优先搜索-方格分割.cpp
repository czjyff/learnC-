#include <iostream>
#include <cstring>
using namespace std;
//  6x6的方格，沿着格子的边线剪开成两部分。
//  要求这两部分的形状完全相同。


int book[10][10];
int cnt=0;
void dfs( int x, int y )
{
    int next[4][2] = { {1,0}, {-1,0}, {0,1},{0,-1} };
    int tx,ty;
    if( x==0 ||x==6 || y==0 || y==6 )
    {
        cnt++;
        return;
    }
    for(int i=0; i<=3; i++ )
    {
        tx = x + next[i][0];
        ty = y + next[i][1];
        if( book[tx][ty]==1 )
            continue;
        book[tx][ty] = 1;
        book[6-tx][6-ty] = 1;
        dfs( tx, ty );
        book[tx][ty] = 0;
        book[6-tx][6-ty] = 0;
    }
    return;
}

int main()
{
    memset(book, 0, sizeof(book) );
    book[3][3] = 1;
    dfs(3,3);
    cout << cnt/4 <<endl;
    return 0;
}
