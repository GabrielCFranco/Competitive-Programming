#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    map<int,int> m;
    int n,k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
        m[k-aux]++;
    }
    sort(v.begin(),v.end());
    int a=0,b=n-1,ans=0;
    while(a<b)
    {
        if(v[a]+v[b]==k)
        {
            ans++;
            a++;
            b--;
        }
        else if(v[a]+v[b]>k) b--;
        else a++;
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