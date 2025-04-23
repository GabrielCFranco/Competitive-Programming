#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
const int MAX = 1000001;
int dp[MAX];
void solve()
{
    bool flag=false;
    string s;
    cin >> s;
    if(s[0]==')') dp[0] = -1;
    else dp[0] = 1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='(')
    }
    if(flag) cout << "0 1\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}