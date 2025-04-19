#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n,k,cont,ans=0;
    cin >> n >> k;
    cont=n;
    if(k==0)
    {
        cout << "0\n";
        return;
    }
    while(n>0)
    {
        if(cont==n)
        {
            k-=cont;
            cont--;
            ans++;
        }
        if(k<=0)
        {
            cout << ans << "\n";
            return;
        }
        for(int i=0;i<2;i++)
        {
            k-=cont;
            ans++;
            if(k<=0)
            {
                cout << ans << "\n";
                return;
            }
        }
        cont--;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}