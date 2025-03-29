#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    #define int ll
    int n;
    vector<int>v;
    cin >> n;
    if(n==1)
    {
        int aux;
        cin >> aux;
        cout << aux <<"\n";
        return;
    }
    int tot=0;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        tot += aux;
        v.PB(aux);
    }
    vector<int> vn;
    for(int i=0;i<n;i++)
    {
        vn.clear();
        for(int j=0; j<v.size()-1; ++j)
        {
            vn.push_back(v[j+1]-v[j]);
        }
        tot = max(tot, v[v.size()-1] - v[0]);
        tot = max(tot, v[0] - v[v.size()-1]);

        v.clear();
        v = vn;
    }
    cout << tot << "\n";
    #undef int
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