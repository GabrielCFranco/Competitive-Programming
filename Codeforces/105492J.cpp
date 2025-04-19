#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> tmsp;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        int x,y; cin >> x >> y;
        pair<int,int> aux = {x,y};
        tmsp.push_back(aux);
        if(i==0) continue;
        else
        {
            if(tmsp[i-1].first<=tmsp[i].first&&tmsp[i-1].second<=tmsp[i].second) continue;
            else flag=false;
        }
    }
    if(flag)cout << "yes\n";
    else cout << "no\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--) solve();
}