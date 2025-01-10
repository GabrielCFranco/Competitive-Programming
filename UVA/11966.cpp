#include <bits/stdc++.h>
#define MAX_N 1001
using namespace std;
typedef long long ll;

int pai[MAX_N ];
int tam[MAX_N ];

void init(){
    for (int i = 1; i <= 1000; i++){
        pai[i] = i;
        tam[i] = 1;
    }
}

int find(int u){
    if (pai[u] == u)
        return u;
    return pai[u] = find(pai[u]);
}

void unite(int u, int v){
    u = find(u);
    v = find(v);
    if (u != v){
        if(tam[v] > tam[u])
            swap(u, v);
        pai[v] = u;
        tam[u] += tam[v];
    }
}

int main(){
    int t, N, constellations;
    double D, X, Y, dX, dY;
    vector<pair<double, double>> stars;
    cin >> t;
    for (int i = 0; i < t; i++){
        init();
        cin >> N >> D;
        constellations = N;
        for (int j = 0; j < N; j++){
            cin >> X >> Y;
            stars.push_back(make_pair(X, Y));
        }
        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){
                if (k != j){
                    dX = (stars[j].first - stars[k].first) * (stars[j].first - stars[k].first);
                    dY = (stars[j].second - stars[k].second) * (stars[j].second - stars[k].second);
                    if (sqrt(dX + dY) < D)
                        unite(j+1, k+1);
                }
            }
        }
        for (int j = 1; j <= N; j++){
            if (pai[j] != j)
                constellations--;
        }
        cout << "Case " << i+1 << ":" << " " << constellations << endl;
        constellations = 0;
        stars.clear();
    }
}