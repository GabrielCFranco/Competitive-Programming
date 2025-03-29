#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    bool possible=true;
    string ans;
    for(auto a:m)
    {
        if(a.second%k!=0)possible=false;
        else
        {
            int cont = a.second/k;
            while(cont--)
            {
                ans.push_back(a.first);
            }
        }
    }
    if(possible)
    {
        int cont = k;
        while(cont--)
        {
            cout << ans;
        }
        cout <<"\n";
    }
    else cout << "-1\n";
}
int main()
{
    solve();
}