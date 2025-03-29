#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX_V 202020
 
vector<vector<int>> v(MAX_V);
int cont, x;bool possible=false;
int vis[MAX_V];
int f[MAX_V];
 
void init()
{
    memset(vis, 0, sizeof(vis));
    memset(f,0,sizeof(f));
}
void addEdge(int a, int b)
{
    v[a].PB(b);
    v[b].PB(a);
}
void sol(int e)
{
    cont++;
    int n=0;
    cout << cont << "\n";
    while(n<cont)
    {
        cout << e << " ";
        e=f[e];
        n++;
    }
    cout << "\n";
    possible=true;
}
void dfs(int a)
{
    if(possible) return;
    cont++;
    vis[a]=1;
    for(auto act: v[a])
    {
        if(possible) break;
        if(vis[act]==0)
        {
            f[act]=a;
            dfs(act);
        }
        else if(act==x&&cont>=3)
        {
            f[act]=a;
            sol(act);
        }
    }
    vis[a]=0;
    cont--;
}
int main()
{
    int n, m;
    cin >> n >> m;
    init();
    for(int i=0;i<m;i++)
    {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        addEdge(aux1, aux2);
    }
    for(int i=1;i<=n;i++)
    {
        cont=0;
        x = i;
        dfs(i);
    }
    if(!possible) cout << "IMPOSSIBLE\n";
    return 0;
}   