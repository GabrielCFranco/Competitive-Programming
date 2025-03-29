#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll n,x,ans=0;
    cin >> n;
    vector<ll> v(n+1,0);
    map<ll,ll> ma;
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
        v[i]+=v[i-1];
        ll x = v[i], r = v[i]%n, f = n-abs(v[i]%n);
        if(r==0)ans++;
        if(ma[r]>0)ans+=ma[r];
        if(ma[f]>0&&(x-f)%n==0)ans+=ma[f];
        ma[r]++;
    }
    cout << ans << "\n";
    }
int main()
{
    int t=1;
    while(t--) solve();
}