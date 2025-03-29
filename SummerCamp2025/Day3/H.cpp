#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX_V 200200
vector<vector<int>>adj(MAX_V);
vector<set<int>>adj_dia(MAX_V);

void addedge(int a, int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void add_bfs(int x){
    queue<pair<int, int>> q;
    q.push({x, 0});

    while(!q.empty()){
        auto u = q.front(); q.pop();
        if(u.second > 3)
            break;
        if(u.first != x) adj_dia[x].insert(u.first);
        for(auto v: adj[u.first]){
            q.push({v, u.second + 1});
        }
    }
}

vector<bool> vis(MAX_V, false);
void dfs(int x){
    if(vis[x] == true) 
        return;
    vis[x] = true;
    cout << x + 1 << " ";
    int best = 1e9, i = 0;
    for(auto v: adj_dia[x]){
        if(adj_dia[v].size() < best && vis[v] == false){
            i = v;
            best = adj_dia[v].size();
        }
    }
    dfs(i);
}
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;
        addedge(a, b);
    }

    for(int i = 0; i < n; ++i){
        add_bfs(i);
    }
    int x = -1, best = 1e9;
    for(int i = 0; i < n; ++i){
        if(adj_dia[i].size() < best){
            best = adj_dia[i].size();
            x = i;
        }
    }
    dfs(x);
    cout << "\n";
}