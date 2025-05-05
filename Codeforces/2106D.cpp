#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> a,b;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        a.push_back(aux);
    }
    for(int i=0;i<m;i++)
    {
        ll aux; cin >> aux;
        b.push_back(aux);
    }
    for(int i=0,j=0;i<n;i++)
    {
        if(a[i]>=b[j]) j++;
        if(j==m)
        {
            cout << "0\n";
            return;
        }
    }
    sort(b.begin(),b.end());
    ll l=0,r=b.size()-1;
    ll ans=INF;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        ll j=0;
        for(int i=0;i<n;i++)
        {
            if(mid==j)
            {
                j++;
            }
            if(a[i]>=b[j]) j++;
            if(j>=m)
            {
                ans = min(ans,b[mid]);
                break;
            }
        }
        if(l==r) break;
        else if(j<m) r=mid;
        else l=mid+1;
    }
    if(ans==INF) cout << "-1\n";
    else cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}