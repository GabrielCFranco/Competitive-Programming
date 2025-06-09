#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int MOD = 998244353;
void solve()
{
    ll n,aux;
    cin >> n;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(),v.end());
    ll ans=v[0];
    for(int i=1;i<n;i++)
    {
        ans = (ans * (v[i]-i)) % MOD;
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}