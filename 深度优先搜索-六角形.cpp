#include <iostream>

using namespace std;

int a[13], book[13]={0};

    void judge()
    {
        int b[6];
        b[0] = a[2]+a[3]+a[4]+a[5];
        b[1] = a[2]+a[6]+a[9]+a[12];
        b[2] = a[5]+a[7]+a[10]+a[12];
        b[3] = a[1]+a[3]+a[6]+a[8];
        b[4] = a[8]+a[9]+a[10]+a[11];
        b[5] = a[1]+a[4]+a[7]+a[11];
        for(int i=1; i<6; i++ )
            if( b[i]!=b[i-1])
                return;
        cout << "    "<<a[1]<<endl;
        cout << a[2] <<"  "<<a[3]<<"  "<<a[4]<<"  "<<a[5]<<endl;
        cout << " "<<a[6]<<"    "<<a[7]<<endl;
        cout <<a[8]<<"  "<<a[9]<<"  "<<a[10]<<"  "<<a[11]<<endl;
        cout << "    "<<a[12];
    }
    void dfs(int step )
    {
        if( step==1||step==2||step==12 )
        {
            dfs(step+1);
            return;
        }
        if( step==13 )
            judge();
        for(int i=1; i<=12; i++ )
        {
            if( book[i]==0 )
            {
                a[step] = i;
                book[i] = 1;
                dfs(step+1);
                book[i] = 0;
            }
        }
        return;
    }

int main()
{
    a[1] = 1;
    a[2] = 8;
    a[12] = 3;
    book[1] = book[8] = book[3] = 1;  //标记1,3,8三个数字已知。
    dfs(1);
    return 0;
}
