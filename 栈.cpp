#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[50], b[50];
    int i, len, mid, next, top;
    cin >> a;
    len = strlen(a);
    mid = len/2 - 1; // ���ַ������е�

    top = 0; // ջ�ĳ�ʼ��
    // ��mid ǰ���ַ�ȫ����ջ
    for(int i=0; i<=mid; i++ )
        b[top++] = a[i];

    top--;
    if( len&0 ) // �ж���ż
        next = mid+1;
    else
        next = mid+2;

    //��ʼƥ��
    for(int i=next; i<len; i++ )
    {
        if(b[top]!=a[i])
            break;
        top--;
    }

    // ���top<0,˵��ջ�ڵ������ַ���ƥ�䵽��
    if( top<0 )
        cout <<a<< "�ǻ��ġ�\n";
    else
        cout <<a<< "���ǻ��ġ�\n";
    return 0;
}
