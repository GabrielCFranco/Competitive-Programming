#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    vector<vector<int>> mat(8,vector<int>(8));
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            char aux;
            cin >> aux;
            if(aux=='.') mat[i].push_back(0);
            else mat[i].push_back(1);
        }
    }
    
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}