#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        v.push_back(aux);
    }
    ll sum=0,num=1,aux=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]+aux==(aux|v[i]))
        {
            sum+=v[i];
            aux+=v[i];
        }
        else
        {
            num++; sum+=v[i];
            aux=v[i];
        }
    }
    cout << sum << " " << num << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--) solve();
}