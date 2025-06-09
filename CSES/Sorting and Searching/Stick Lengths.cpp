#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    ll sum=0;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(),v.end());
    
    ll sum = INF;
    ll l=0, m, r=INF;
    while(l<r)
    {
        m = (l+r)/2;
        
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}