#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    string a,b;
    cin >> a >> b;
    ll i=a.length()-1,j=b.length()-1;
    unordered_set<ll> s;
    while(i>=0&&j>=0)
    {
        if(a[i]==b[j])
        {
            s.insert(i);
            j--;
        } 
        i--;
    }
    if(j>=0)
    {
        cout << "-1\n"; 
        return;
    }
    ll ans=0, cont=1;
    for(int i=0;i<a.length();i++)
    {
        if(s.find(i)==s.end()) ans+=cont;
        else cont++;
    }
    if(ans)cout << ans << "\n";
    else cout << "1\n";
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)solve();
}