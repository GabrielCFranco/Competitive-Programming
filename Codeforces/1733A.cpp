#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        v.push_back(aux);
    } 
    int cont=0;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        if(v[i]>m[i%k])m[i%k] = v[i];
        if(cont==k) cont=0;
    }
    ll ans=0;
    for(auto a:m) ans+=a.second;
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