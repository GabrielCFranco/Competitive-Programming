#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    char aux;
    string ans;
    for(int i=0;i<64;i++)
    {
        cin >> aux;
        if(aux!='.') ans.push_back(aux);
    }
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