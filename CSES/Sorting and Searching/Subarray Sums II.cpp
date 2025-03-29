#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll n,x,ans=0;
    cin >> n >> x;
    vector<ll> v(n+1,0);
    map<ll,ll> ma;
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
        v[i]+=v[i-1];
        if(v[i]==x)ans++;
        if(ma[v[i]-x]>0)ans+=ma[v[i]-x];
        ma[v[i]]++;
    }
    cout << ans << "\n";
    }
int main()
{
    int t=1;
    while(t--) solve();
}