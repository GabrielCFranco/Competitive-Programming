#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

vector<vector<int>> mat(50);
void addedge(int a, int b, int w)
{
    mat[a][b] = b;
    mat[b][a] = a;
}
void solve()
{
    int n,m,x;
    cin >> n >> m >> x;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}