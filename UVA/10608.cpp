#include <bits/stdc++.h>
#define MAX_N 30000
using namespace std;
typedef long long ll;
int pai[MAX_N + 1];
int tam[MAX_N + 1];
void init(){
    for(int i = 1; i <= MAX_N; i++){
        pai[i] = i;
        tam[i] = 1;
    }    
}
int find(int u){
    if(pai[u] == u) return u;
    return pai[u] = find(pai[u]);
}
void unite(int u, int v){
    u = find(u);
    v = find(v);
    if(u != v){
        if(tam[v] > tam[u]) swap(u, v);
        pai[v] = u;
        tam[u] += tam[v];
    }
}
int main(){
    int t,n,m,a,b,tot=1;
    cin >> t;
    for(int i=0;i<t;i++){
        init();
        cin >> n >> m;
        for(int j=0;j<m;j++){
            cin >> a >> b;
            unite(a,b);
        }
        for(int j=1;j<=MAX_N+1;j++){
            tot = max(tot,tam[j]);
        }
        cout << tot << endl;
        tot = 1;
    }   
}