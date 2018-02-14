#include <iostream>
using namespace std;
const int n = 8;
int c[8],cnt=0;

void print()  //打印
{
    for(int i=0; i < n; ++i)
    {
        for(int j=0; j < n; ++j)
        {
            if( j==c[i] )
                cout << j << ' ';
        }
    }
    cout<<endl;
}

void search(int r)
{
    if( r==n )//当已经排到最后一个皇后的时候位置一定固定。【条件2】
    {
        ++cnt;
        cout << endl;
        print();
        return;
    }
    for(int col=0; col < n; ++col )
    {
        c[r] = col; //r表示第几行，c[r]=col，表示第r行第i列
        int ok=1;
        for(int j=0; j < r; ++j )
            if( c[r]==c[j]||r-j==c[r]-c[j]||r-j==c[j]-c[r] )//判断是否在同一列，是否在主对角线或副对角线上【条件1】
            {
                ok=0;
                break;
            }
        if(ok)  //  如果可以则进行下一行的寻找，不可以则检查当前行的下一列
            search(r+1);
    }
}

int main()
{
    cout << "输出的数字按先后顺序编号，得到对应行（该数字对应编号）的对应列坐标（该数字），皇后的位置就是该行的对应坐标。";
    search(0);
    cout << "总的放法有：" << cnt << endl;
    return 0;
}
