#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define int ll
void solve()
{
    int n;
    cin >> n;
    int mult=0,sum=1;
    cout << 0 << "\n";
    for(int i=2;i<=n;i++)
    {
        cout << ((((i*i))*((i*i)-1))/2)-(mult*8) << "\n";
        mult+=sum;
        sum++;
    }
}
#undef int
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}