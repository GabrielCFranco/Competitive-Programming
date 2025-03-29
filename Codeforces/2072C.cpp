#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll mult(ll a, ll b)
{
    return ((a*b));
}
ll fastexp(ll x, ll k)
{
    if(k == 0) return 1;
    ll k_2 = fastexp(x, k/2);
    if(k % 2 == 1) return mult(mult(k_2,k_2),x);
    else return mult(k_2,k_2);
}
void solve()
{
    ll n,x;    
    cin >> n >> x;
    if(n==1){cout<<x<<"\n";return;}
    ll mex=0, mn=0;
    ll a=0;
    while(log2(x)>a)
    {
        if((x & (1 << a)) == 0)break;
        a++;
    }    
    mex=fastexp(2,a);
    mn=mex/2;
    if(mex>n)mex=n;
    ll aux=0;
    while(aux<n)
    {
        if(aux==n-1&&mn>aux) cout << x << " ";
        else if(aux<mex) cout << aux << " ";
        else cout << x << " ";
        aux++;
    }
    cout << "\n";
}
int main()
{
    //ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}