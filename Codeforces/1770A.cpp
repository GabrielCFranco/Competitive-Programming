#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll n,m,aux;
    cin >> n >> m;
    vector<ll> v;
    map<ll,int> mp;
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        v.push_back(aux);
    }
    for(int j=0;j<m;j++)
    {
        cin >> aux;
        mp[aux]++;
    }
    sort(v.begin(),v.end());
    for(auto a:mp)
    {
        while(a.second>0)
        {
           bool flag=true;
            for(int j=0;j<n;j++)
            {
                if(v[j]<a.first)
                {
                    v[j]=a.first;
                    flag=false;
                    break;
                }
            }
            if(flag) v[0] = a.first;
            a.second-=1;
       }
   }
   ll ans=0;
   for(int i=0;i<n;i++)
   {
        ans+=v[i];
   }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}