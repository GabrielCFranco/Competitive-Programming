#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n,x,p;
    cin >> n >> x >> p;
    if(x==0)
    {
        cout << 0 << "\n";return;
    }
    if(n*p>=abs(x))
    {
        if(x>0) cout << abs(ceil(x/(float)p))<<"\n";
        else cout << abs(floor(x/(float)p))<<"\n";
        
    }
    else cout << -1 << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}