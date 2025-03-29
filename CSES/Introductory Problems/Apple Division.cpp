#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int n;
ll ans=LINF;
vector<ll> vn;
void bf(ll a, ll b, int s)
{
    ll temp = abs(a-b);
    if(s==n) 
    {
        ans = min(ans,temp);
    }
    else
    {
        bf(a+vn[s],b,s+1);
        bf(a,b+vn[s],s+1); 
    }
}
void solve()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        vn.push_back(aux);
    }
    bf(0,0,0);
    cout << ans << "\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}