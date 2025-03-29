#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define rep(i, a, b) for(int i = a; i < (b); ++i)
int ans=-1,x;
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> vn;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        vn.PB(aux);
    }
    sort(vn.begin(),vn.end());
    for(int i=0;i<m;i++)
    {
        cin >> x;
        ans=-1;
        cout << ans << "\n";
    }
}
int main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}