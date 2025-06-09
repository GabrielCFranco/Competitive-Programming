#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    int w=-1,h=-1;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        w = max(w,a);
        h = max(h,b);
    }
    cout << (h*2)+(w*2) << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}