#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n,t;
    cin >> n >> t;
    cout << floor((t-(n-1))/n) << "\n"; 
}
int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}