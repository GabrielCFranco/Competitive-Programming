#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin >> n >> m;
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            string s;
            cin >> s;
            v.PB(s.length());
        }
        int ans=0,tot=0;
        for(int j=0;j<n;j++)
        {
            tot+=v[j];
            if(tot<=m)ans++;
        }
        cout << ans << "\n";
    }
}