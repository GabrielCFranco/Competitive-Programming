#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll a,b;
    cin >> a >> b;
    if(a==0||b==0)
    {
        if(a==0&&b==0)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    if((a+b)%3==0&&(a*2)>=b&&(b*2)>=a)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}