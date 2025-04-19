#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int al,ar,bl,br;
    cin >> al >> ar;
    cin >> bl >> br;
    int ans=0;
    for(int i=1;i<=100;i++)
    {
        if(i>=al&&i>=bl)
        {
            if(i+1<=br&&i+1<=ar) ans++;
            if(i==ar&&i+1<=br) ans++;
            else if(i==br&&i+1<=ar) ans++;
        }
        else if(i>=al)
        {
            if(i+1>=bl&&i+1<=br) ans++;
        }
        else if(i>=bl)
        {
            if(i+1>=al&&i+1<=ar) ans++;
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