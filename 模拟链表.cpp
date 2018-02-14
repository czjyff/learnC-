#include <iostream>
#include <cstring>
using namespace std;

// 用数组模拟链表。
int main()
{
    int data[20], right[20];
    int n;
    cout << "请输入节点数： \n";
    cin >> n;
    for( int i=0; i<n; i++ )
        cin >> data[i];
    for(int i=0; i<n-1 ; i++ )
        right[i] = i+1;
    right[n-1] = -1;
    // 在data数组末尾增加一个数
    cout << "请输入要插入的数： \n";
    int len = n;
    cin >> data[n];
    // 从链表的头部开始遍历
    int t = 0;
    while( t!=-1 )
    {
        if( data[right[t]] > data[len] )
        {
            right[len] = right[t];
            right[t] = len;
            break;
        }
        t = right[t];
    }

    t=0;
    cout << "此时链表中的数： \n";
    while( t!=-1 )
    {
        cout << data[t] << ' ';
        t = right[t];
    }
    return 0;
}
