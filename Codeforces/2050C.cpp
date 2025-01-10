#include <bits/stdc++.h>
using namespace std;
#define PB push_back
bool b=false;
void solve(string s, int e)
{        
        if(stoll(s)%9==0) {
            b=true;
            return;
        }
        else if(b) return;
        else
        {
            for(int j=e;j<s.length();j++)
            {
                if(s[j]=='2')
                {
                    string aux = s;
                    aux[j] = '4';
                    solve(aux, j);
                }
                if(s[j]=='3')
                {
                    string aux = s;
                    aux[j] = '9';
                    solve(aux, j);
                }
                if(b) return;
            }
        }
}
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string s;
        b=false;
        cin >> s;
        solve(s,0);
        if(b) cout << "YES\n";
        else cout << "NO\n";
    }
}