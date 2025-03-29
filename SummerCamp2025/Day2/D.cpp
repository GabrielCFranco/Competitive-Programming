#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll const M = 1e9+7;
ll fact[100005];
ll mult(ll a, ll b)
{
    return ((a%M)*(b%M))%M;
}
ll exp(ll x, ll k)
{
    if(k == 0) return 1;
    ll k_2 = exp(x, k/2);
    if(k % 2 == 1) return mult(mult(k_2,k_2),x);
    else return mult(k_2,k_2);
}
ll inv (ll x)
{
    return exp(x,M-2);
}
ll makefact(ll x)
{
    for(int i=3;i<=x;i++)
    {
        fact[i] = mult(fact[i-1],i);
    }
    return fact[x];
}
void solve()
{
    fact[0] = 1; fact[1] = 1; fact[2] = 2;
    ll n, k;
    cin >> k >> n;
    if(n==1) cout << 1 <<"\n";
    else if(n==k) cout << n << "\n";
    else
    {
        ll top = k+n-1;
        ll bot = k;
        cout << mult(makefact(top),inv(mult(bot,top-bot)))<<"\n";
    }
}
int main()
{
    while(1)
    {
    solve();
    }
}