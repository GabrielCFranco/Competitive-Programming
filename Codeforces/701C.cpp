#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    map<char,ll> m;
    string s;
    for(int i=0;i<n;i++)
    {
        char aux; cin >> aux;
        s.push_back(aux);
        m[aux]++;
    }
    ll a=0, b=0;
    ll ans = s.size();
    while(a<b)
    {
        if(m[s[a]]>=2)
        {
            ans--;
            m[s[a]]--;
            a++;
        }
        else if(m[s[b]]>=2)
        {
            ans--;
            m[s[b]]--;
            b--;
        }
        else  break;
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--) solve();
}