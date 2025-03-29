#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define rep(i, a, b) for(int i = a; i < (b); ++i)
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    map<int,int> s;
    map<int,int> e;
    rep(i,0,n)
    {
        int x,y;
        cin >> x >> y;
        v.PB(x);v.PB(y);
        s[x]++;
        e[y]++;
    }
    sort(v.begin(),v.end());
    int ans=0,cont=0;
    rep(i,0,v.size())
    {
        if(s[v[i]])
        {
            cont+=s[v[i]];
            ans = max(ans,cont);
        }
        if(e[v[i]]) cont-=e[v[i]];
    }
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