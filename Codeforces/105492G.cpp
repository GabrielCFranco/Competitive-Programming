#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mult(int x, int n)
{
    if(n==0)
    {
        x=1;
        return x;
    }
    int mult = x;
    for(int i=0;i<n;i++)
    {
        x*=mult;
    }
    return x;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> vs;
    float ans=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if(s[s.size()-1]=='3'||s[s.size()-1]=='2'||s[s.size()-1]=='1')
        {
            s[s.size()-1] = '0';
        }
        vs.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        int k=0;
        for(int j=0;j<vs[i].size()-1;j--)
        {
            if(vs[i][j]!='.')k++;
            
        }
        float a = sum;
        ans += (a/100);
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--) solve();
}