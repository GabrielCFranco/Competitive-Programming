#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll n,x;
    cin >> n >> x;
    vector<ll> v;
    map<ll,ll> md,me;
    map<ll,ll> freq;
    for(int i=0;i<n;i++)
    {
        ll aux;
        cin >> aux;
        v.push_back(aux)++;
        freq[aux]++;
        md[aux*x]++;
    }
    for(int i=0;i<n;i++)
    {
        
    }
    cout << ans << "\n";
}
int main()
{
    //ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}