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
    // 初始化队列
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
        q.head++; // 删除队列头

        q.a[q.tail] = q.a[q.head];  // 将新的队列头插入到队列末尾
        q.tail++; // reset tail
        q.head++; // 为下一轮输出做准备
    }
    return 0;
}
