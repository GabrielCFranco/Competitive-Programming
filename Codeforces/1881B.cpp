#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a); v.push_back(b); v.push_back(c); 
    sort(v.begin(),v.end());
    int i=0;
    if(v[1]%v[0]!=0||v[2]%v[0]!=0)
    {
        cout << "NO\n"; return;
    }
    while(i<3)
    {
        if(v[0]!=v[1]) v[1]-=v[0];
        else if(v[0]!=v[2]) v[2]-=v[0];
        else break;
        i++;
    }
    if(v[0]==v[1]&&v[0]==v[2]) cout << "YES\n";
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