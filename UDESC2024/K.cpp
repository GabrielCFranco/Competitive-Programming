#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int m = 998244353;
vector<ll> dp;

ll mult(ll a, ll b)
{
    a %= m; b %= m;
    return ((a*b)%m);
}
ll fastexp(ll x, ll k)
{
    if(k == 0) return 1;
    ll k_2 = fastexp(x, k/2);
    //cout << "x : " << x << " k: " << k << " k_2: " << k_2 << "\n";
    if(k % 2 == 1) return mult(mult(k_2,k_2),x);
    else return mult(k_2,k_2);
}
void solve()
{
    int n;
    cin >> n;
    dp = vector<ll>(n+1, -1);
    dp[0] = 1; dp[1] = 1;
    for (int i = 2; i <= n; i++){
        dp[i] = dp[i-1]%m+dp[i-2]%m;
    }
    ll ans = fastexp(2, dp[n]);
    cout << ans << endl;
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}