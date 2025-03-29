#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX_V 202020

vector<vector<int>> v(MAX_V);
vector<int>nlone;
int vis[MAX_V];
int dgin[MAX_V];
int dgout[MAX_V];
bool possible = true;

void init()
{
    memset(vis, 0, sizeof(vis));
    memset(dgin,0,sizeof(dgin));
    memset(dgout,0,sizeof(dgout));
}
void makeEdge(int a, int b)
{
    v[a].PB(b);
    dgin[b]++;
    dgout[a]++;
}
void dfs(int a)
{
    vis[a]=1;
    int cont=0;
    stack<int> stk;
    stk.push(a);
    while(!stk.empty())
    {
        cont++;
        int t = stk.top();
        if(dgin[t]>0&&dgout[t]>0) nlone.PB(t);
        for(auto act: v[a])
        {

        }
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
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0) ;
    }
    if(possible) cout << "YES\n";
    else
    {

    }
    return 0;
}