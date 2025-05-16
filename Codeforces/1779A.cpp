#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    char aux;
    string s;
    bool l=false,r=false,rl=false;
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        s.push_back(aux);
        if(aux=='L') l=true;
        if(aux=='R') r=true;
        if(r)
        {
            if(aux=='L') rl=true;
        }
    }
    if(!l||!r)cout << -1 << "\n";
    else if(rl) cout << "0\n";
    else if(n==2||s[0]=='L'&&s[n-1]=='R') cout << "1\n";
    else cout << "2\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}