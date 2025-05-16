#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    map<int,int> m;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        m[aux]++;
    }
    for(auto a:m)
    {
        if(a.second<2)
        {
            cout << "-1\n";
            return;
        }
    }
    int mi=0;
    for(auto a:m)
    {
        cout << mi+a.second << " ";
        for(int i=mi+1;i<mi+a.second;i++)
        {
            cout << i << " ";
        }
        mi += a.second;
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