#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<pair<int,int>> comb;
    for(int i=0;i<n*2;i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        comb.push_back(make_pair(v[i],v[i+n]));
    }
    for(int i=1;i<n;i++)
    {
        ans+=abs(v[i]-v[i-1]);  
        ans+=abs(v[(i+n)]-v[(i+n)-1]);
    }
    cout << ans << "\n";
    for(int i=0;i<comb.size();i++)
    {
        cout << comb[i].first << " " << comb[i].second << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}