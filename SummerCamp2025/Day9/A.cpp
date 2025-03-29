#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    string s;
    cin >> s;
    map<char,int> m;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
        if(m.size()==3)
        {
            if(m['A']>0&&m['B']>0&&m['C']>0)
            {
                ans=m['A'];
                m['A']=0;
                m['B']=0;
                m['C']=0;
            }
        }  
    }
    cout << ans << "\n";
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}