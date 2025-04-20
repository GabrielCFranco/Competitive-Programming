#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
int dp[20000];
void solve()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vector<int> v;
    v.push_back(a),v.push_back(b),v.push_back(c);
    dp[a] = 1,dp[b] = 1,dp[c] = 1;
    for(int i=0;i<n;i++)
    {
        if(dp[i]==0) continue;
        for(int j=0;j<3;j++)
        {
            dp[i+v[j]] = max(dp[i+v[j]],dp[i]+1);
        }
    }
    cout << dp[n] << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}