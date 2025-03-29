#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll const m = 1e9 + 7;
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
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin >> a >> b;
        cout << fastexp(a,b) % m << "\n";
    }
}