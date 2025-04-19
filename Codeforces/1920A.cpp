#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    ll sml = -1;
    ll big = 1e9+7;
    for(int i=0;i<n;i++)
    {
        int cmd; ll num;
        cin >> cmd >> num;
        if(cmd==1)
        {
            sml = max(sml,num);  
        }
        else if(cmd==2)
        {
            big = min(big, num);
        }
        else if(cmd==3)
        {
            v.push_back(num);
        }
    }
    if(sml>big)
    {
        cout << "0\n";
        return;
    }
    else
    {
        int ans=(big-sml)+1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=sml&&v[i]<=big) ans--;
        }
        cout << ans << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}