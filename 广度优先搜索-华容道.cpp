#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

struct node
{
    int x,y;
    int step;
    int mapp[2][3];
};

int book[4][4][4][4][4][4]={0}, Ax,Ay,Bx,By;
int dir[4][2] = {{-1,0},{0,-1},{0,1},{1,0}};
node input;

int bfs()
{
    queue<node> que;
    que.push( input );
    while ( !que.empty() )
    {
        //cout << "hhh";
        node a = que.front(), tmp;
        if ( a.mapp[Ax][Ay]==2&&a.mapp[Bx][By]==1 )
        {
            cout<< a.step<<endl;
            break;
        }
        //cout << "kkk";
        que.pop();

        for (int i=0; i<4; i++)
        {
            tmp = a;
            tmp.x += dir[i][0] ;
            tmp.y += dir[i][1] ;
            if ( tmp.x>=0&&tmp.x<2&&tmp.y>=0&&tmp.y<3 )
            {
                int t = tmp.mapp[a.x][a.y];
                tmp.mapp[a.x][a.y] = tmp.mapp[tmp.x][tmp.y];
                tmp.mapp[tmp.x][tmp.y] = t;

                tmp.step = a.step+1;

                if( book[tmp.mapp[0][0]][tmp.mapp[0][1]][tmp.mapp[0][2]][tmp.mapp[1][0]][tmp.mapp[1][1]][tmp.mapp[1][2]]==0 )
                    que.push(tmp);
                book[tmp.mapp[0][0]][tmp.mapp[0][1]][tmp.mapp[0][2]][tmp.mapp[1][0]][tmp.mapp[1][1]][tmp.mapp[1][2]] = 1;
            }
        }
        //cout << "队列大小："<< que.size()<<endl;
    }
}

int main()
{
    char ch[5];
    for (int i=0; i<2; i++)
    {
        gets(ch);
        for (int j=0; j<3; j++)
        {
            if (ch[j]=='A')
            {
                input.mapp[i][j] = 1;
                Ax=i;
                Ay=j;
            }
            else if (ch[j]=='B')
            {
                input.mapp[i][j] = 2;
                Bx=i;
                By=j;
            }
            else if (ch[j]=='*')
            {
                input.mapp[i][j] = 3;
            }
            else
            {
                input.mapp[i][j] = 0;
                input.x = i;
                input.y = j;
            }
        }
    }
//    for( int i=0; i<2; i++)
//        for( int j=0; j<3; j++ )
//            cout << input.mapp[i][j];
    book[input.mapp[0][0]][input.mapp[0][1]][input.mapp[0][2]][input.mapp[1][0]][input.mapp[1][1]][input.mapp[1][2]] = 1;
    input.step = 0;
    bfs();
    return 0;
}
