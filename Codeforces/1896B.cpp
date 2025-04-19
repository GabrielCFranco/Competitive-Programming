#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, ans=0;
    string s;
    cin >> n >> s;
    vector<bool> possible(n+1,true);
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&possible[i]==true)
        {
            ans++;
            possible[i]=false;
            char aux;
            aux = s[i];
            s[i] = s[i+1];
            s[i+1] = aux;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&possible[i]==true)
        {
            ans++;
            possible[i]=false;
            char aux;
            aux = s[i];
            s[i] = s[i+1];
            s[i+1] = aux;
        }
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