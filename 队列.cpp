#include <iostream>
using namespace std;


struct queue1
{
    int a[25];
    int head;
    int tail;
};
int main()
{
    struct queue1 q;
    // ��ʼ������
    q.head = 0;
    q.tail = 0;
    for(int i=0; i<9; i++ )
    {
        cin >> q.a[q.tail];
        q.tail++;
    }

    while( q.head<q.tail )
    {
        cout << q.a[q.head] << ' ';
        q.head++; // ɾ������ͷ

        q.a[q.tail] = q.a[q.head];  // ���µĶ���ͷ���뵽����ĩβ
        q.tail++; // reset tail
        q.head++; // Ϊ��һ�������׼��
    }
    return 0;
}
