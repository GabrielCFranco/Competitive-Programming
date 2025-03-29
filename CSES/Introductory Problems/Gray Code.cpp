#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string s = "";
    for(int i=0;i<n;i++)
    {
        s.PB('0');
    }
    for(int i=0;i<n;i++)
    {
        cout << s << "\n";
        s[0]='1';
        do
        {
            cout << s << "\n";
            
        } while (next_permutation(s.begin(),s.end()));
    }
}
int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}