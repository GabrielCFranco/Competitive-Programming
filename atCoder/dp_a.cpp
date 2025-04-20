#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
int dp[100001];
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
    }
    dp[0] = 0;
    dp[1] = abs(v[1]-v[0]);
    for(int i=2;i<n;i++)
    {
        dp[i] = min(dp[i-1]+abs(v[i]-v[i-1]),dp[i-2]+abs(v[i]-v[i-2]));
    }
    cout << dp[n-1] << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}