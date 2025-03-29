#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define rep(i, a, b) for(int i = a; i < (b); ++i)
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    map<int,int> m;
    rep(i,0,n)
    {
        int x,y;
        cin >> x >> y;
        v.PB({y,x});
    }
    sort(v.begin(),v.end());
    int ans=0,last=0;
    rep(i,0,n)
    {
        if(last<=v[i].second)
        {
            last=v[i].first;
            ans++;
        }
    }
    cout << ans << "\n";
}
int main()
{
    int v=1;
    while(v--)
    {
        solve();
    }
}