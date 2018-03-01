#include "iostream"
#include "stdio.h"
#include "queue"
#include "string.h"
#include "vector"
#include "map"
#include "string"
using namespace std;

int n, m;
vector<int> G[10001];
int visit[10001];
int ans = 0;

void dfs(int now, int depth, int start)
{
    visit[now] = 1;
    if(depth >= 4)
    {
        ans++;
        return;
    }
    for(int i=0; i<G[now].size(); i++)
    {
        int next = G[now][i];
        if(!visit[next] || (next == start && depth == 3))
        {
            visit[next] = 1;
            dfs(next, depth+1, start);
            if(next != start)
                visit[next] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;
    int u, v;
    for(int i=0; i<m; i++)
    {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for(int k=1; k<=n; k++)
    {
        memset( visit, 0, sizeof(visit) );
        dfs(k, 1, k);
    }
    cout << ans;
    return 0;
}
