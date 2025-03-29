#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll unsigned long long
ll const m = 1e9 + 7;
ll mult(ll a, ll b, ll mi)
{
    a %= (m+mi); b %= (m+mi);
    return ((a*b)%(m+mi));
}
ll fastexp(ll x, ll k, ll mi)
{
    if(k == 0) return 1;
    ll k_2 = fastexp(x, k/2, mi);
    if(k % 2 == 1) return mult(mult(k_2,k_2,mi),x,mi);
    else return mult(k_2,k_2,mi);
}
ll little(ll x)
{
    return x%(m-1);
}
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << fastexp(a,little(fastexp(b,c,-1)),0) << "\n";
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