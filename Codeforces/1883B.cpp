#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n,k;
    map<char,int> m;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    bool even;
    int r = n-k;
    if(r==1)
    {
        cout << "YES\n";
        return;
    }
    if(r%2==0) even=true;
    else even=false;
    for(auto a:m)
    {
        if(a.second%2==1)
        {
            if(!even) even=true;
            else if(k>0) k--;
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    if(k%2==1&&r%2==1) cout << "YES\n";
    else if(k%2==0) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}