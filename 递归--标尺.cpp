#include <iostream>
#include <cstring>

using namespace std;
const int L = 65;
const int lever = 6;
int main()
{
    void paint ( char a[], int low, int high, int c);
    char ruler[L];
    for( int i=1; i < L-2; i++ )
        ruler[i] = ' ';
    ruler[L-1] = '\0'; //������봦���ַ������ĩβ�Ŀ�

    int min = 0;
    int max = L-2;
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;
    for( int i=1; i<=lever ; i++ )
    {
        paint(ruler, min, max, i);
        cout << ruler << endl;

        //����ruler�ַ�����
        for( int j=1; j < L-2; j++ )
            ruler[j] = ' ';
        ruler[0] = ruler[L-1] = '|';
        ruler[L-1] = '\0';
    }
    return 0;
}
void paint ( char a[], int low, int high, int c)
{
    if( 0==c )
        return;
    int mid = (low + high)/2;
    a[mid] = '|';
    // �ֱ�����˵��м䣬�м䵽��β��ϸ��
    paint(a, low, mid , c-1 );
    paint(a, mid, high, c-1 );
}
