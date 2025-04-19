#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        v.push_back(aux);
    }
    for(int i=0;i<v.size();i++)
    {
        int a=0;
        for(int j=0;j<v.size();j++)
        {
            if(i==j) continue;
            else a=a^v[j];
        }
        if(a==v[i])
        {
            cout << a << "\n";
            return;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}