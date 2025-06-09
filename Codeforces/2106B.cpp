#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n,x;
    cin >> n >> x;
    for(int i=0;i<x;i++)
    {
        cout << i << " ";
    }
    for(int i=n-1;i>=x;i--)
    {
        cout << i << " ";
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