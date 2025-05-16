#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
const int B = 1000005;
ll dp[B];
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<ll> v;
    ll aux;
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        v.push_back(aux);
    }
    dp[0] = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(dp[j]<=0||j+v[i]>x) continue;
            dp[j+v[i]] = (dp[j+v[i]] + dp[j]) % MOD;
        }
    }
    cout << dp[x] << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}