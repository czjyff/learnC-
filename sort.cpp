#include <iostream>
#include <algorithm>
using namespace std;

bool compared(int a, int b)
{
    return a > b; // ����������С���ǽ���
}

int main()
{
    int n;
    cout << "������Ҫ��������ֵĸ�����\n";
    cin >> n;
    int *p = new int[n];

    cout << "������" << n << "������\n";
    for(int i=0; i < n; i++ )
        cin >> p[i];

    sort(p, p+n,compared);

    for(int i=0; i < n; i++ )
        cout << p[i] << ' ';
    delete []p;
    return 0;
}
