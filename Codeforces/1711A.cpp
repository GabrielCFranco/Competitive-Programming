#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << "1\n";
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(i==1) cout << n << " ";
        else cout << i-1 << " ";
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