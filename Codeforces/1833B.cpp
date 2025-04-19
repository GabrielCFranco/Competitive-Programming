#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> va;
    vector<int> vb;
    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        va.push_back({aux,i});
    }
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        vb.push_back(aux);
    }
    sort(va.begin(),va.end());
    sort(vb.begin(),vb.end());
    for(int i=0;i<n;i++)
    {
        ans[va[i].second]=vb[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}