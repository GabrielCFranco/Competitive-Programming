#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n,m,p,q;
    cin >> n >> m >> p >> q;
    if(p==1)
    {
        if(q*n==m) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(n==p)
    {
        if(m==q) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(n%p==0)
    {
        if(m%q==0) cout << "YES\n";
        else cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}