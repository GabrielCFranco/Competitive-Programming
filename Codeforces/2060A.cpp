#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    vector<int> v;
    for(int i=0;i<4;i++)
    {
        int aux;
        cin >> aux;
        v.PB(aux);
    }
    map<int,int> m;
    m[v[0]+v[1]]++; m[v[2]-v[1]]++; m[v[3]-v[2]]++;
    cout << 4-m.size() << "\n";
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