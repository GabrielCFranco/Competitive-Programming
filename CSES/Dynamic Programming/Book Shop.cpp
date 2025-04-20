#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int MAX = 10001
ll dp[MAX][MAX];
void solve()
{
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            if(i==0) dp[i][j]=0;
            else dp[i][j]=-1;
        }
    }
    int n,x;
    cin >> n >> x;
    vector<int> vn;
    vector<int> vx;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        vn.push_back(aux);
    }
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        vx.push_back(aux);
        dp[vn[i][0]] = vx[i];
    }
    ll ans=-1;
    for(int i=1;i<x;i++)
    {
        if(dp[i][0]>=INF)continue;
        for(int j=0;j<n;j++)
        {
            if(dp[i][j]==1) continue;
            dp[i+vn[j]][0] = min(dp[i+vn[j]][0],dp[i][0]+vx[j]);
            
            if(i+vn[j]<=x)ans = max(ans,dp[i+vn[j]][0]);
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}