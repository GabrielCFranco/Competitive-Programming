#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n;
    cin >> n;
    map<int,int> m;
    int mx=-1,val=0;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        m[aux]++;
        if(mx<m[aux])
        {
            mx=m[aux];
        }
    }
    cout << n-mx << "\n";
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