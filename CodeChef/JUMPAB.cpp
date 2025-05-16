#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    bool flag=false;
    ll tot = n*b;
    int l=0,r=n;
    int lastl,lastr;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if((a*(mid))+(b*(n-mid))>m)
        {
            l=mid;
        }
        else if((a*(mid))+(b*(n-mid))==m)
        {
            cout << "Yes\n";
            return;
        }
        else
        {
            r = mid;
        }
        if(lastl==l&&lastr==r) l++;
        lastl=l;
        lastr=r;
    }
    cout << "No\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}