#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
vector<ll> fact(100005,1);
ll const M = 1e9+7;
ll sub(ll a, ll b)
{
    return ((a%M)-(b%M)+M)%M;
}
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
    for(int i=2;i<=x;i++)
    {
        fact[i] = mult(fact[i-1],i);
    }
    return fact[x];
}
int main()
{
    int n,k;
    cin >> n >> k; //N LUGARES K PESSOAS
    if(k==1) cout << n*k << "\n";
    else if()
    else
    {
        cout << mult(sub(makefact(n-k),inv(makefact((n-k)-k))),2) << "\n";
    }
}