#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int M = 1e9+7;
const int BIG = 1001;
ll mat[BIG][BIG];
void solve()
{
    ll n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char aux;
            cin >> aux;
            if(aux=='.')mat[i][j] = 0;
            else mat[i][j] = -1;
        }
    }
    if(mat[0][0]==0)mat[0][0] = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==-1) continue;
            if(mat[i][j+1]>=0) mat[i][j+1] += mat[i][j] % M;
            if(mat[i+1][j]>=0) mat[i+1][j] +=mat[i][j] % M;
        }
    }
    if(mat[n-1][n-1] == -1) cout << 0 << "\n";
    else cout << mat[n-1][n-1] % M << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}