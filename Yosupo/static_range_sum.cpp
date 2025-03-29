#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n,q;
    cin >> n >> q;
    vector<ll> v(n+1); 
    v[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
        v[i]+=v[i-1];
    }
    for(int i=0;i<q;i++)
    {
        ll a,b;
        cin >> a >> b;
        cout << v[b]-v[a] << "\n";
    }
}
int main()
{
    int t=1;
    while(t--) solve();
}