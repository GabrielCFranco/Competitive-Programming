#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<int> v;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
        sum+=aux;
    }
    sum-=v[n-1];
    sum-=v[n-2];
    cout << v[n-1]-(v[n-2]-sum) << "\n";
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}