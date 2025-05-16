#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int CTOI = 96;
void solve()
{
    string s;
    vector<int> v;
    int p;
    cin >> s >> p;
    for(int i=0;i<s.length();i++)
    {
        v.push_back(s[i]-CTOI);
    }
    sort(v.begin(),v.end());
    int cont=0;
    map<char,int> m;
    for(int i=0;i<v.size();i++)
    {
        cont+=v[i];
        if(cont>p) break;
        m[v[i]+CTOI]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]>0)
        {
            m[s[i]]--;
            cout << s[i];
        }
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