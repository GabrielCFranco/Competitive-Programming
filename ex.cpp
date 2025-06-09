#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, din;
    cin >> n >> din;
    vector<ll> moeda(n);
    vector<ll> qtd(din+1, 0);
    for(int i = 0; i< n; i++){
        cin >> moeda[i];
    }
    qtd[0] = 1;
    for(int i = 1; i <= din; i++) {
        for(int j = 0; j < n; j++) {
            if (i - moeda[j] >= 0) {
                qtd[i] += (qtd[i - moeda[j]]) % MOD;
            }
        }
    }

    cout << qtd[din] << "\n";
    return 0;
}