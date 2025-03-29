#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define rep(i, a, b) for(int i = a; i < (b); ++i)
void solve()
{
    int n,x;
    cin >> n >> x;
    map<int,int> m;
    vector<int> v;
    rep(i,0,n)
    {
        int aux;
        cin >> aux;
        v.PB(aux);
    }
    sort(v.begin(),v.end());
    int l=0,r=n-1;
    int ans=0;
    while(r>=l)
    {
        if(v[l]+v[r]<=x)
        {
            ans++;
            l++;
            r--;
        }
        else
        {
            ans++;
            r--;
        }
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