#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    bool ans = true;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        v.PB(aux);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]<=2*(n-1-i)||v[i]<=2*(i)) ans=false;
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
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