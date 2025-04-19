#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int INF = 10001;
int mat[10001][10001];
int m[10001][10001];
void addedge(int x,int y)
{
    m[x][y]=1;
}
int solve()
{
    memset(mat,0,sizeof(mat));
    memset(m,0,sizeof(m));
    int n;
    cin >> n;
    vector<int> self;
    vector<int> smallto(n,INF);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int aux; cin >> aux;
            if(i==j)
            {
                self.push_back(aux);
            }
            if(i!=j)
            {
                if(smallto[j]>aux)smallto[j]=aux;
            }
            mat[i][j]=aux;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
        }
    }
}
int main()
{
    int t=1;
    //cin >> t;
    while(t--) solve();
}