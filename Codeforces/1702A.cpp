#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fastexp(int x,int n)
{
    int mult=x;
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return x;
    }
    for(int i=0;i<n-1;i++)
    {
        x*=mult;
    }
    return x;
}
void solve()
{
    string s;
    cin >> s;
    int aux = stoi(s);
    if(aux<=9)
    {
        cout << (1-aux)*-1 << "\n";
        return;
    }
    ll ans=aux-fastexp(10,s.size()-1);
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}