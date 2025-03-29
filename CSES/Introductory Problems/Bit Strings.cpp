#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll const M = 1e9 + 7;
ll mult(ll a, ll b)
{
    a %= M; b %= M;
    return ((a*b)%M);
}
ll exp(ll x, ll k)
{
    if(k == 0) return 1;
    ll k_2 = exp(x, k/2);
    if(k % 2 == 1) return mult(mult(k_2,k_2),x);
    else return mult(k_2,k_2);
}
void solve()
{
    int n;
    cin >> n;
    cout << exp(2,n) << "\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}