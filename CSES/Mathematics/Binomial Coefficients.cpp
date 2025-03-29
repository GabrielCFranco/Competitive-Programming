#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX 1000005
ll const M = 1e9 + 7;
ll fact[MAX];
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
ll inv (ll x)
{
    return exp(x,M-2);
}
void makefact()
{
    for(int i=2;i<MAX;i++)
    {
        fact[i]=mult(i,fact[i-1]);
    }
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << mult(fact[a],inv(mult(fact[b],fact[a-b]))) << "\n";
}
int main()
{
    int t;
    cin >> t;
    fact[0]=1;fact[1]=1;
    makefact();
    while(t--)
    {
        solve();
    }
}