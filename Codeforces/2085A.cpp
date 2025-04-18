#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
int cont=0;
void solve()
{
    int n,  k;
    cin >> n >> k;
    string s;
    cin >> s;
    string auxr = s, auxs = s;
    reverse(auxr.begin(),auxr.end());
    sort(auxs.begin(),auxs.end());
    if(k==0)
    {
        if(auxr>s) cout << "YES\n";
        else cout << "NO\n";
        return;
    }
    if(s==auxs&&s==auxr) 
    {
        cout << "NO\n";
        return;
    }
    if(auxs<=s) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}