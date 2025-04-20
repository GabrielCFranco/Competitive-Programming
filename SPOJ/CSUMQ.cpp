#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n, aux;
    vector<int> v;
    vector<int> vsum;
    cin >> n;
    cin >> aux;
    v.push_back(aux);
    vsum.push_back(aux);
    for(int i=1;i<n;i++)
    {
        cin >> aux;
        v.push_back(aux);
        vsum.push_back(aux+vsum[i-1]);
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin >> l >> r;
        if(l==r)
        {
            cout << v[l] << "\n";
            continue;
        }
        if(l-1<0) cout << vsum[r] << "\n";
        else cout << vsum[r] - vsum[l-1] << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}