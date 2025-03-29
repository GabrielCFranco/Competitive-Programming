#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX 200200
void solve()
{
    int k,n,m;
    cin >> n >> m >> k;
    vector<int> vn;
    vector<int> vm;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        vn.push_back(aux);
    }
    for(int i=0;i<m;i++)
    {
        int aux;
        cin >> aux;
        vm.push_back(aux);
    }
    sort(vn.begin(),vn.end());
    sort(vm.begin(),vm.end());
    int a=0,b=0,ans=0;
    while(a!=n&&b!=m)
    {
        if(vn[a]+k>=vm[b]&&vn[a]-k<=vm[b])
        {
            a++;b++;ans++;
        }
        else if(vn[a]<vm[b]) a++;
        else b++;
    }
    cout << ans << "\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}