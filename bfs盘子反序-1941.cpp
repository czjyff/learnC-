#include <cstdio>
#include <string>
#include <queue>
#include <map>
#include <iostream>
using namespace std;

#define fi first
#define se second
#define pr make_pair

typedef pair<string, int> psi;
const string st = "012345678";
const string ed = "087654321";
const int d[5] = {1, 2, 7, 8};
queue< pair<psi, int> > que;
map<string, string> parent;     // map����ȥ��

int main()
{
    // ��һ��״̬��string���ַ�0�ڸ�string�е�λ������ʾ
    // һ��״̬���ḽ���ϲ���
    int ans;
    parent[st] = "";
    que.push( pr(pr(st, 0), 0) );
    while ( !que.empty() )
    {
        string x = que.front().fi.fi;
        int pos = que.front().fi.se;
        int length = que.front().se;
        if (x == ed)
        {
            ans = length;
            break;
        }
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            string y = x;
            swap( y[pos], y[(pos + d[i]) % 9] );
            if ( parent.count(y) == 0 )
            {
                parent[y] = x;
                que.push( pr(pr(y, (pos + d[i]) % 9), length + 1) );
            }
        }
    }
    printf("ans = %d\n\n", ans);
    // ��ӡ������Ծ��·��
    for (string now = ed; now != ""; now = parent[now])
        cout << now<<endl;
    return 0;
}
