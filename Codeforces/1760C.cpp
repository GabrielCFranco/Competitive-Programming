#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1,v2;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        v1.push_back(aux);
    }
    v2 = v1;
    sort(v2.begin(),v2.end());
    int big=v2[n-1];
    for(int i=0;i<n;i++)
    {
        if(v1[i]==big) cout << v2[n-1]-v2[n-2] << " ";
        else cout << v1[i]-big << " ";
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