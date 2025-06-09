#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    vector<int> v;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
        sum+=aux;
    }
    if(sum>=35)
    {
        cout << 0 << "\n";
        return;
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<5;i++)
    {
        sum += 10-v[i];
        ans += 100;
        v[i] = 10;
        if(sum>=35)
        {
            cout << ans << "\n";
            break;
        }
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