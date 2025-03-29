#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll tot=0;
        for(int j=0;j<m;j++)
        {
            ll aux;
            cin >> aux;
            tot=tot+(aux*(m-j));
        }
        v.push_back(tot);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=1;i<=v.size();i++) ans+=v[i]*i;
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