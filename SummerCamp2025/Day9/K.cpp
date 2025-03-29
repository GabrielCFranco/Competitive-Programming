#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
vector<pair<int,int>> ord;
vector<int> c;
vector<vector<int>> tr;
void addedge(int a, int b)
{
    
}
void solve()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        c.push_back(aux);
    }
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin >> x >> y;
        ord.push_back({x,y});
        
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