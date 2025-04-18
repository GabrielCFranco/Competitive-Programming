#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    string s;
    cin >> s;
    int cont=0; char l = ' ';
    for(int i=0;i<s.length();i++)
    {
        if(cont==0)
        {
            cont++;
            l=s[i];
        }
        else if(s[i]==l)
        {
            cont++;
        }
        else
        {
            if(cont==1)
            {
                cout << "NO\n";
                return;
            }
            else
            {
                cont=1;
                l=s[i];
            }
        }
    }
    if(cont==1) cout << "NO\n";
    else cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}