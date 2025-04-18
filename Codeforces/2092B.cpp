#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    string a,b,aux;
    cin >> a >> b;
    int even_a=0,odd_a=0;
    int even_b=0,odd_b=0;
    for(int i=0;i<n;i++)
    {
        aux.push_back('0');
        if(i%2==0)
        {
            if(a[i]=='1') even_a++;
            if(b[i]=='1') even_b++;
        }
        else
        {
            if(a[i]=='1') odd_a++;
            if(b[i]=='1') odd_b++;
        }
    }
    int tote=0,toto;
    if(n%2==0)
    {
        tote=n/2,toto=n/2;
    }
    else
    {
        n++;
        tote=n/2,toto=(n/2)-1;
        n--;
    }
    if(toto>=even_a+odd_b&&tote>=odd_a+even_b) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}