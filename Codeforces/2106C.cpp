#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a,b;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        a.push_back(aux);
    }
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        b.push_back(aux);
        if(aux>-1) flag=true;
    }
    if(flag)
    {
        ll sum = -1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>-1&&b[i]>-1)
            {
                if(sum==-1)
                {
                    sum = a[i] + b[i];
                }
                else
                {
                    if(a[i]+b[i]!=sum)
                    {
                        cout << "0\n";
                        return;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(sum-a[i]>-1&&sum-a[i]<=k) continue;
            else
            {
                cout << "0\n";
                return;
            }
        }
        cout << "1\n";
    }
    else
    {
        ll sml=INF,big=-1;
        for(int i=0;i<n;i++)
        {
            sml = min(sml,a[i]);
            big = max(big,a[i]);
        }
        cout << (k-(big-sml)) + 1 << "\n";
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