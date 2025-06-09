#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> a,b;
    vector<bool> c;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        a.push_back(aux);
        c.push_back(true);
    }
    for(int i=0;i<m;i++)
    {
        int aux; cin >> aux;
        b.push_back(aux);
    }
    sort(a.begin(),a.end());
    int l=0,r=a.size();
    
}
int main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}