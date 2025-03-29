#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX_V 202020

int node, edge;
vector<int> vsol;


vector<vector<int>> v(MAX_V);
int vis[MAX_V];
int f[MAX_V];
int dist[MAX_V];

void init()
{
    memset(vis, 0, sizeof(vis));
    memset(dist, 0, sizeof(dist));
}
void makeEdge(int a, int b)
{
    v[a].PB(b);
    v[b].PB(a);
}
void bfs(int a)
{
    vis[a]=1;
    dist[a]=1;
    f[a]=a;
    queue<int> q;
    q.push(a);
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        for(auto act: v[t])
        {
            if(vis[act]==0)
            {
                vis[act]=1;
                q.push(act);
                dist[act] = dist[t]+1;
                f[act] = t;
            }
        }
    }
}
int main()
{  
    cin >> node >> edge;
    init();
    for(int i=0;i<edge;i++)
    {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        makeEdge(aux1,aux2);
    }
    bfs(1);
    if(dist[node]==0)cout << "IMPOSSIBLE\n";
    else 
    {
        cout << dist[node] << "\n";
        stack<int>stk;
        int aux=node;
        for(int i=0;i<dist[node];i++)
        {
            stk.push(aux);
            aux = f[aux];
        }
        for(int i=0;i<dist[node];i++)
        {
            cout<<stk.top()<<" ";
            stk.pop();
        }
        cout << "\n";
        return 0;
    }
}