#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n,x;
    cin >> n >> x;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        sum +=aux;
    }
    if(sum%x==0)cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}