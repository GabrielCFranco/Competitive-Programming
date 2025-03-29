#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll unsigned long long
void solve()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll mult = n/(a+b);
    ll rest = n%(a+b);
    if(rest>a) rest=a;
    cout << a*mult + rest << "\n";
}
int main()
{
    ll t=1;
    //cin >> t;
    while(t--) solve();
}