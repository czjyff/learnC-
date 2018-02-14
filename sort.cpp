#include <iostream>
#include <algorithm>
using namespace std;

bool compared(int a, int b)
{
    return a > b; // 大于是升序，小于是降序。
}

int main()
{
    int n;
    cout << "请输入要排序的数字的个数：\n";
    cin >> n;
    int *p = new int[n];

    cout << "请输入" << n << "个数：\n";
    for(int i=0; i < n; i++ )
        cin >> p[i];

    sort(p, p+n,compared);

    for(int i=0; i < n; i++ )
        cout << p[i] << ' ';
    delete []p;
    return 0;
}
