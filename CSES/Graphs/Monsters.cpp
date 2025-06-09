#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int mat[1001][1001];
    int row,col;
    cin >> row >> col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            char aux;
            cin >> aux;
            if(aux=='#') mat[i][j] = -1;
            else if(aux=='.') mat[i][j] = 0;
            else if(aux=='A') mat[i][j] = 1;
            else mat[i][j] = 2;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat[i][j]==1||mat[i][j]==2) bfs(i,j);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}