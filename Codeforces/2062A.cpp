#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int tot=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')tot++;
    }
    cout << tot << "\n";
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