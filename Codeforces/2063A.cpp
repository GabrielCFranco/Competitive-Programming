#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll x, y;
    cin >> x >> y;
    if(x==1&&y==1) cout << "1\n";
    else cout << y-x << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}