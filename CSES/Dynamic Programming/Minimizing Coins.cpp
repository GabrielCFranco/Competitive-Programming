#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX 1000100
const int INF = 0x3f3f3f3f;
ll const m = 1e9+7;
int n, d;
vector<ll> dp(1000100,INF);
vector<int> c;
void makedp()
{
    dp[0]=0;
    for(int i=0;i<1000100;i++)
    {
        int cont=0;
        while(cont<c.size())
        {
            if(c[cont]+i>MAX) break;
            int transition=c[cont]+i;
            dp[transition] = min((dp[i])+1,dp[transition]);
            cont++;
        }
    }
}
void solve()
{
    cin >> n >> d;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        c.PB(aux);
    }
    sort(c.begin(),c.end());
    makedp();
    if(dp[d]==INF) cout << "-1\n";
    else cout << dp[d] << "\n";

}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}