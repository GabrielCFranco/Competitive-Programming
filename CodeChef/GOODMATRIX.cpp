#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
vector<vector<int>> mat;
vector<vector<int>> vis;
const int INF = 0x3f3f3f3f;
int dfs(int x,int y)
{
    int cont=1;
    if(vis[x][y]==1) return cont;
    vis[x][y]=1;
    stack<pair<int,int>> stk;
    stk.push({x,y});
    pair<int,int> a;
    while(!stk.empty())
    {
        a = stk.top();
        stk.pop();

    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    mat.clear();
    vis.clear();
    for(int i=0;i<n;i++)
    {
        vector<int> va;
        mat.push_back(va);
        vis.push_back(va);
        for(int j=0;j<m;j++)
        {
            int aux; cin >> aux;
            mat[i][j] = aux;
            vis[i].push_back(0);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans = max(ans,dfs(i,j));
        }
    }
    cout << n*m - ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}