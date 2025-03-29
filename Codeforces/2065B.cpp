#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    string s;
    cin >> s;
    char last = s[0];
    int ans = 1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==last){ans=1;break;}
        else{last=s[i];ans++;}
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