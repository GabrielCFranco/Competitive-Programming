#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll unsigned long long
ll const m = 1e9+7;
ll sum(ll a, ll b)
{
    return ((a%m)+(b%m))%m;
}
ll sub(ll a, ll b)
{
    return ((a%m)-(b%m)+m)%m;
}
ll mult(ll a, ll b)
{
    return ((a%m)*(b%m))%m;
}
ll fastexp(ll x, ll k)
{
    if(k == 0) return 1;
    ll k_2 = fastexp(x, k/2);
    if(k % 2 == 1) return mult(mult(k_2,k_2),x);
    else return mult(k_2,k_2);
}
int main()
{
    ll x, y;
    x %= m; y%=m;
    char op;
    cin >> x >> op >> y;
    if(op=='+') cout << sum(x,y) << "\n";
    else if(op=='-') cout << sub(x,y) << "\n";
    else if(op=='*') cout << mult(x,y) << "\n";
    else cout << fastexp(x,y) << "\n";
}