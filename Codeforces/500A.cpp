#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> pai;
vector<bool> vis;
vector<vector<int>> adj;
vector<int> in, out;
int t,aux=0;
void initDFS(int V){
    vis = vector<bool>(V + 1);
}
void initGrafo(int V){
    adj = vector<vector<int>>(V + 1);
    in = out = vector<int>(V + 1);
}
void aresta(int u, int v){
    adj[u].push_back(v);
    out[u]++;
    in[v]++;
}

bool dfs(int u){
    vis[u] = true;
    for(auto v : adj[u]){
        if(!vis[v]){
            if(v==t) return true;
            return dfs(v);
        }
        else return false;
    }
    return false;
}
int main(){
    int n,aux;
    cin >> n >> t;
    initGrafo(n);
    initDFS(n);
    for(int i=1;i<n;i++){
        cin >> aux;
        aresta(i,aux+i);
    }
    if(dfs(1))cout << "YES" << endl;
    else cout << "NO" << endl;
}