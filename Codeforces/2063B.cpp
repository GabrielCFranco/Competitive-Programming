#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        m[aux]++; 
    }
    int dif=(r-l)+1;
    ll tot=0;
    for(auto a:m)
    {
        if(dif<=0) break;
        tot+=a.first*(min(dif,a.second));
        dif-=a.second;
    }
    cout << tot << "\n";
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