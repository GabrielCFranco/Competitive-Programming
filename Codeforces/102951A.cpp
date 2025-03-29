#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> vx,vy;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        vx.push_back(aux);
    }
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        vy.push_back(aux);
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll x=vx[i]-vx[j], y=vy[i]-vy[j];
            ans = max(ans,(x*x)+(y*y));
        }
    }
    cout << ans << "\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}