#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX_V 405
#define MAX_A 80000
#define INF 100000005
int grau[MAX_V];
int d[MAX_V];
int p[MAX_V];
int visited[MAX_V];
typedef struct{
    int v; // vértice
    double w; // peso
} t_adj;
t_adj adj[MAX_V][MAX_A];

void dijkstra(int inicial){
    priority_queue< pair<int,int> > heap; // peso, vertice
    int s, t, peso;
    for(int i=0; i<MAX_V; i++) d[i] = INF;
    memset(p, -1, sizeof(p));
    heap.push(make_pair(d[inicial] = 0, inicial));
    while(!heap.empty()){
        s = heap.top().second;
        heap.pop();
        for(int i=0; i<grau[s]; i++)
        {
            t = adj[s][i].v;
            peso = adj[s][i].w;
            if(d[s] + peso < d[t])
            {
                d[t] = d[s] + peso;
                p[t] = s;
                heap.push(make_pair(-d[t], t));
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,m,q;
        cin >> n >> m >> q;
        for(int j=0;j<m+q;j++)
        {
            int v,u,m;
        }
    }
}