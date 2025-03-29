#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll l;
    cin >> l;
    string s;
    cin >> s;
    map<char,ll> m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    if(m['-']<2||m['_']<1)
    {
        cout << "0\n"; return;
    }
    if(l<3)
    {
        cout << "0\n"; return;
    }
    ll h1=ceil(m['-']/2.),h2=floor(m['-']/2);
    cout << h1*m['_']*h2 << "\n";
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}