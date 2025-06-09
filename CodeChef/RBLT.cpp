#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n,aux;
    cin >> n;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        if(aux==0)a++;
        else if(aux==1)b++;
        else c++;
    }
    a = a-abs(b-c);
    if(a<0||a%2==1) cout << "NO\n";
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