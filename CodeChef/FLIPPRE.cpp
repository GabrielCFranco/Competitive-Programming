#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z=0,o=0,ans=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') o++;
        else z++;
        if(z==o)
        {
            ans*=2;
        }
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