#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll n,m;
void solve()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        vn.push_back(aux);
    }
    for(int i=0;i<m;i++)
    {
        ll aux; cin >> aux;
        vm.push_back(aux);
    }
    //c1 \/
    if(vn.size()==1){cout << "YES\n";return;}
    for(int i=0;i<n;i++)pvn.push_back(vm[0]-vn[i]);
    int a=1;
    if(search(a)) cout << "YES\n";
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