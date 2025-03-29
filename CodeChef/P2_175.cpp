#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int x;
    cin >> x;
    if(x==1||x==3) cout << "1\n";
    else if(x%2==1) cout << x/2 << "\n";
    else cout << (x/2)+1 << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}