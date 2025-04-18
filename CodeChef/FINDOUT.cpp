#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v;
    set<ll> s,s1;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        v.push_back(aux);
        s.insert(aux);
        s1.insert(aux+aux);
    }
    for(auto a:s1)
    {
        if(s.find(a)==s.end())
        {
            cout << a/2 << " " << a/2 << "\n";
            return; 
        }
    }
    cout << "-1\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}