#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    bool f = true;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        v.push_back(aux);
    }
    ll big=-1, sml = 200000;
    for(int i=0;i<n;i++)
    {
        if(v[i]>big) big = v[i];
        if(v[i]<sml) sml = v[i];
    }
    ll dif = big-sml;
    if(dif==0) f = false;
    map<ll,ll> m;
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]-dif>-1)m[v[i]-dif]++;
        if(m[v[i]]>0) ans+=m[v[i]];
    }
    if(f)cout << ans*2 << "\n";
    else cout << (n*n) - n << "\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}