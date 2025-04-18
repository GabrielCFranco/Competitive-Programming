#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    string s;
    cin >> s;
    string a,b;
    a = s[0];
    b = s.substr(1);
    bool flag=false;
    while(b.size()>0)
    {
        if(b[0]=='0'||stoi(a)>=stoi(b))
        {
            a.push_back(b[0]);
            b = b.substr(1);
        }
        else
        {
            cout << stoi(a) << " " <<stoi(b) << "\n";
            return;
        }
    }
    cout << "-1\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}