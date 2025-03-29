#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> w(n);
    map<int, int> cnt;
    map<int, vector<int>> mpower;
    set<int> st;
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        cin >> w[i];
        cnt[w[i]] += 1;
        mx = max(mx, w[i]);
        st.insert(w[i]);
        mpower[w[i]].push_back(i);
    }

    vector<vector<int>> adj(n);
    for(int i = 0; i < n-1; ++i){
        int a, b;
        cin >> a >> b; 
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    auto value = --st.end();
    --value;

    if(cnt[mx] > 1){
        int node = 0;
        for(int i = 0; i < n; ++i){
            if(w[i] == *value)
                node = i;
        }
        cout << node + 1 << "\n";
        return;
    }

    vector<int> node_max(n, 0);
    vector<bool> vis(n, false);
    auto dfs = [&](auto &&self, int x)
    {
        if(vis[x]) return node_max[x];
        vis[x] = true;

        if(adj[x].size() == 1 && x != 0)
        {
            node_max[x] = w[x];
            return w[x];
        }
        for(auto u: adj[x])
        {
            if(vis[u] == false)
                node_max[x] = max(node_max[x], self(self, u));
        }
        return node_max[x];
    };
    dfs(dfs, 0);
    
    for(int i=0; i<st.size()-1; i++)
    {
        for(auto it: mpower[*value]){
            if(node_max[it] != mx){
                cout << it + 1 << "\n";
                return;
            }
        }
        value--;
    }
    cout << "0\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}