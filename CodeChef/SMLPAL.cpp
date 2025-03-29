#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int x,y;
    cin >> x >> y;
    string aux="",ans="";
    for(int i=0;i<x+y;i+=2)
    {
        if(i<x)aux.PB('1');
        else aux.PB('2');
    }
    ans=aux;
    reverse(aux.begin(),aux.end());
    cout << ans+aux << "\n";
}
int main()
{
    int t=1;
    cin >> t;
    while(t--) solve();
}