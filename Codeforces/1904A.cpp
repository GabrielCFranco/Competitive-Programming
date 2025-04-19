#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll a,b;
    cin >> a >> b;
    ll kx,ky, qx,qy;
    set<pair<int,int>> k,q;
    ll ans=0;
    cin >> kx >> ky >> qx >> qy;
    vector<ll> dx,dy;
    if(a!=b)
    {
        dx.push_back(a);
        dx.push_back(a);
        dx.push_back(b);
        dx.push_back(b);
        dx.push_back(-a);
        dx.push_back(-a);
        dx.push_back(-b);
        dx.push_back(-b);
        dy.push_back(b);
        dy.push_back(-b);
        dy.push_back(a);
        dy.push_back(-a);
        dy.push_back(b);
        dy.push_back(-b);
        dy.push_back(a);
        dy.push_back(-a);
    }
    else
    {
        dx.push_back(a);
        dx.push_back(a);
        dx.push_back(-a);
        dx.push_back(-a);
        dy.push_back(a);
        dy.push_back(-a);
        dy.push_back(a);
        dy.push_back(-a);
    }

    for(int i=0;i<dx.size();i++)
    {
        k.insert({kx+dx[i],ky+dy[i]});
        q.insert({qx+dx[i],qy+dy[i]});
    }
    for(auto at:k)
    {
        if(q.find(at)!=q.end()) ans++;
    }
    cout << ans <<"\n";
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}