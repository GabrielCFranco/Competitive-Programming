#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> v;
    vector<int> dif;
    for(int i=0;i<k;i++)
    {
        int aux;
        cin >> aux; 
        v.PB(aux);
    }
    sort(v.begin(),v.end());
    map<int,pair<int,int>> md;
    for(int i=0;i<k;i++)
    {
        md[(k*2)-n]={v[i],i};
    }
    
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