#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX_V 202020

int sol=0;

vector<vector<int>> v(MAX_V);
int vis[MAX_V];

void init()
{
    memset(vis, 0, sizeof(vis));
}
void edge(int a, int b)
{
    v[a].PB(b);
    v[b].PB(a);
}
void dfs(int a)
{
    vis[a]=1;
    for(auto t: v[a])
    {
        if(vis[t]==0) dfs(t);
    }
}
int main()
{
    int n,m;    
    cin >> n >> m;
    init();
    for(int i=0;i<m;i++)
    {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        edge(aux1,aux2);
    }
    int last=0, next=0;
    queue<pair<int,int>> qsol;
    for(int i=1; i<=n ;i++)
    {
        if(vis[i]==0)
        {
            if(next==0) next = i;
            else 
            {
                last = next;
                next=i;
                qsol.push({last,next});
                sol++;
            }
            dfs(i);
        }
    }
    cout << sol << "\n";
    int size = qsol.size();
    if(last!=0)
    {
        for(int i=0;i<size;i++) 
        {
            cout << qsol.front().first << " " << qsol.front().second <<  "\n";
            qsol.pop();
        }
    }
}