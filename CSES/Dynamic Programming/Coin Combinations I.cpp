#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
ll dp[9999999];
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        v.push_back(aux);
        dp[aux]=1;
    }
    for(int i=1;i<=x;i++)
    {
        if(dp[i]==0)continue;
        for(int j=0;j<n;j++)
        {
            dp[i+v[j]]+= dp[i] % mod ;
        }
    }
    cout << dp[x]%mod << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}