#include <iostream>
using namespace std;
const int n = 8;
int c[8],cnt=0;

void print()  //��ӡ
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
    if( r==n )//���Ѿ��ŵ����һ���ʺ��ʱ��λ��һ���̶���������2��
    {
        ++cnt;
        cout << endl;
        print();
        return;
    }
    for(int col=0; col < n; ++col )
    {
        c[r] = col; //r��ʾ�ڼ��У�c[r]=col����ʾ��r�е�i��
        int ok=1;
        for(int j=0; j < r; ++j )
            if( c[r]==c[j]||r-j==c[r]-c[j]||r-j==c[j]-c[r] )//�ж��Ƿ���ͬһ�У��Ƿ������Խ��߻򸱶Խ����ϡ�����1��
            {
                ok=0;
                break;
            }
        if(ok)  //  ��������������һ�е�Ѱ�ң����������鵱ǰ�е���һ��
            search(r+1);
    }
}

int main()
{
    cout << "��������ְ��Ⱥ�˳���ţ��õ���Ӧ�У������ֶ�Ӧ��ţ��Ķ�Ӧ�����꣨�����֣����ʺ��λ�þ��Ǹ��еĶ�Ӧ���ꡣ";
    search(0);
    cout << "�ܵķŷ��У�" << cnt << endl;
    return 0;
}
