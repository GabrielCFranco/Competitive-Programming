#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans=0;
    set<int> no;
    for(int i=0;i<s.size();i++)
    {
        if(no.find(i)!=no.end())continue;
        if(s[i]=='m')
        {
            if(i+1<s.size()&&s[i+1]=='a')
            {
                if(i+2<s.size()&&s[i+2]=='p')
                {
                    ans++;
                    no.insert(i+2);
                }
            }
        }
        else if(s[i]=='p')
        {
            if(i+1<s.size()&&s[i+1]=='i')
            {
                if(i+2<s.size()&&s[i+2]=='e')
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}