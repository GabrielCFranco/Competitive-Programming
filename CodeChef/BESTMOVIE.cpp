#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    int ans = INF;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a>=7)
        {
            if(b<=ans) ans = b;
        }
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