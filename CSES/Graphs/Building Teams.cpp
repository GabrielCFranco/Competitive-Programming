#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX_V 202020

vector<vector<int>> v(MAX_V);
int vis[MAX_V];
int nteam[MAX_V];
int team = 1;
bool possible = true;
void init()
{
    memset(vis, 0, sizeof(vis));
}
void makeEdge(int a, int b)
{
    v[a].PB(b);
}
void bfs(int a)
{
    vis[a]=1;
    queue<int> q;
    q.push(a);
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        if(nteam[t]==0)nteam[t]=1;
        for(auto act: v[t])
        {
            if(vis[act]==0)
            {
                vis[act]=1;
                if(nteam[t]==1)nteam[act]=2;
                else nteam[act]=1;
                q.push(act);
            }
            if(nteam[t]==nteam[act]){possible=false;break;}
        }
        if(!possible) break;
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        makeEdge(aux1,aux2);
    }
    for(int i=1;i<=n;i++) if(vis[i]==0) bfs(i);
    if(possible)
    {
        for(int i=1;i<=n;i++)
        {
            cout << nteam[i] << " ";
        }
        cout << "\n";
    }
    else cout << "IMPOSSIBLE\n";
    return 0;
}