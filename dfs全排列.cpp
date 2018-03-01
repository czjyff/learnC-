//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//void permutation(int k, int n, int a[])
//{
//    //�ݹ鵽�ײ�
//    if(k == n-1)
//    {
//        for(int i = 0; i < n; i ++)
//            printf("%d", a[i]);
//        printf("\n");
//    }
//    else
//    {
//        for(int i = k; i < n; i ++)
//        {
//            int temp = a[k];
//            a[k] = a[i];
//            a[i] = temp;
//
//            //������ݹ���һ��
//            permutation(k+1, n, a);
//
//            //��֤ÿһ��ݹ�󱣳���һ���˳��
//            temp = a[k];
//            a[k] = a[i];
//            a[i] = temp;
//        }
//    }
//}
//int main()
//{
//    int a[100];
//    int n;
//    scanf("%d", &n);
//
//    for(int i = 0; i < n; i ++)
//        a[i] = i+1;
//
//    permutation(0, n, a);
//    return 0;
//}

#include <iostream>
using namespace std;
int n, a[100], book[100] = {0};

void dfs(int step)
{
    if( step==n )
    {
        for( int i=0; i<n; i++)
            cout << a[i];
        cout << endl;
        return;
    }
    for(int i=1; i<=n; i++ )
    {
        if( book[i]==0 )
        {
            a[step] = i;
            book[i] = 1;
            dfs(step+1);
            book[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    dfs(0);
    return 0;
}
