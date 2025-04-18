#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    a*=d, b*=c;
    if(a==b) cout << "0\n";
    else if(a!=0&&b%a==0||b!=0&&a%b==0)cout << "1\n";
    else cout << "2\n";
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}