#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
        v[i]+=v[i-1];
    }
    int a=0,b=1,ans=0;
    while(a<=n&&b<=n)
    {
        if(v[b]-v[a]==x)
        {
            a++;ans++;
        }
        else if(v[b]-v[a]>x) a++;
        else b++;
    }
    cout << ans << "\n";
}
int main()
{
    int t=1;
    while(t--) solve();
}