#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n,k;
    cin >> n >> k;
    if(n==1)
    {
        cout << 0 << "\n";
        return;
    }
    if(k==2)
    {
        cout << n-1 << "\n";
        return;
    }
    if(n<=k)
    {
        cout << "1\n"; 
        return;
    }
    int ans=0;
    while(n>1)
    {
        n-=(k-1);
        ans++;
    }
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