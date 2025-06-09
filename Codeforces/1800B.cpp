#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n,k;
    cin >> n >> k;
    map<char,int> m;
    string s;
    for(int i=0;i<n;i++)
    {
        char aux; cin >> aux;
        s.push_back(aux);
        m[aux]++;
    }
    int ans=0;
    for(auto a:m)
    {
        if(a.second<=0) continue;
        if(a.first<96)
        {
            ans+=min(m[a.first],m[a.first+32]);
            if(k>0)
            {
                int x = abs(m[a.first+32]-m[a.first]);
                int aux = min(k,x/2);
                k-=aux;
                ans+=aux;
            }
            m[a.first] = 0;
            m[a.first+32] = 0;
        }
        else
        {
            ans+=min(m[a.first],m[a.first-32]);
            if(k>0)
            {
                int x = abs(m[a.first-32]-m[a.first]);
                int aux = min(k,x/2);
                k-=aux;
                ans+=aux;
            }
            m[a.first] = 0;
            m[a.first-32] = 0;
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