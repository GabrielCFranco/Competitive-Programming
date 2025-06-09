#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll n,aux;
    vector<ll> a;
    vector<ll> sum;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> aux;
        a.push_back(aux);
        if(i==0) sum.push_back(aux);
        else sum.push_back(sum[i-1]+aux);
    }
    ll max=-1,pos;
    for(int i=0;i<n;i++)
    {

    }   
    cout << sum[4] << "\n";
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}