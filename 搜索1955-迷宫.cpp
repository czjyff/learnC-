#include <iostream>
#include <cstring>
#include <fstream>
#include <windows.h>
using namespace std;
char ch[12][10];
int cnt = 0, book[10][10];

void dfs( int a, int b )
{
    if( a>9||a<0||b>9||b<0 )
    {
        cnt++;
        return;
    }
    if( ch[a][b]=='L' )
        a--;
    else if( ch[a][b]=='R' )
        a++;
    else if( ch[a][b]=='U' )
        b--;
    else if( ch[a][b]=='D')
        b++;
    if( book[a][b]==1 )
        return;
    book[a][b] = 1;
    dfs( a, b );
}
int main()
{
    int i=0,j=0;
    ifstream infile("test.dat.txt");
    if( !infile.is_open() )
    {
        cout << "could not open file!\n";
		exit(0);
    }
    while( infile>>ch[i++])
        ;
    infile.close();

    for( i=0; i<10; i++ )
    {
        for( j=0; j<10; j++ )
        {
            memset(book, 0, sizeof(book) );
            dfs( i, j );
        }
    }
    cout << cnt <<endl;
    return 0;
}
