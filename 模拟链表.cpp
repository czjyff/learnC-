#include <iostream>
#include <cstring>
using namespace std;

// ������ģ������
int main()
{
    int data[20], right[20];
    int n;
    cout << "������ڵ����� \n";
    cin >> n;
    for( int i=0; i<n; i++ )
        cin >> data[i];
    for(int i=0; i<n-1 ; i++ )
        right[i] = i+1;
    right[n-1] = -1;
    // ��data����ĩβ����һ����
    cout << "������Ҫ��������� \n";
    int len = n;
    cin >> data[n];
    // �������ͷ����ʼ����
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
    cout << "��ʱ�����е����� \n";
    while( t!=-1 )
    {
        cout << data[t] << ' ';
        t = right[t];
    }
    return 0;
}
