#include <iostream>
#include <vector>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        v.PB(aux);
    }
    int a=0,b=0;
    int ans=0,val=0;
    while(a<n&&b<n)
    {
        while(b<n)
        {
            val+=v[b];
            b++;
            if(val>x)
            {
                val-=v[a];
                a++;
            }
        }
        ans = max(ans, b-a);
        a++; val -=v[a];
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