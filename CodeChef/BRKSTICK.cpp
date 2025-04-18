#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        ans+=(aux-1);
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