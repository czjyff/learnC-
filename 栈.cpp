#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[50], b[50];
    int i, len, mid, next, top;
    cin >> a;
    len = strlen(a);
    mid = len/2 - 1; // 求字符串的中点

    top = 0; // 栈的初始化
    // 将mid 前的字符全部入栈
    for(int i=0; i<=mid; i++ )
        b[top++] = a[i];

    top--;
    if( len&0 ) // 判断奇偶
        next = mid+1;
    else
        next = mid+2;

    //开始匹配
    for(int i=next; i<len; i++ )
    {
        if(b[top]!=a[i])
            break;
        top--;
    }

    // 如果top<0,说明栈内的所有字符都匹配到了
    if( top<0 )
        cout <<a<< "是回文。\n";
    else
        cout <<a<< "不是回文。\n";
    return 0;
}
