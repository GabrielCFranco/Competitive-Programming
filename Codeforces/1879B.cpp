#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll n,aux;
    ll s1=0,s2=0;
    int sml1 = INF,sml2 = INF;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        s1+=aux;
        if(sml1>aux)sml1=aux;
    }
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        s2+=aux;
        if(sml2>aux)sml2=aux;
    }
    if(s1+(sml2*n)>=s2+(sml1*n)) cout << s2+(sml1*n) << "\n";
    else cout << s1+(sml2*n) << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}