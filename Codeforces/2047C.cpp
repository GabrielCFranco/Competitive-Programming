#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        vector<int> a, b, d;
        int n;
        pair<long long,int> big = {-1000000005,-1};
        cin >> n;
        long long aux;
        for(int j=0;j<n;j++)
        {
            cin >> aux;
            a.PB(aux);
        }
        for(int j=0;j<n;j++)
        {
            cin >> aux;
            b.PB(aux);
        }
        for(int j=0;j<n;j++)
        {
            d.PB(abs(a[j]-b[j]));
        }
        int dif = 1000000;
        for(int j=0;j<n;j++)
        {
            if(big.first<a[j]+b[j])
            {
                big.first=a[j]+b[j];
                big.second=j;
            }
            else if(big.first==a[j]+b[j]&&d[j]<dif)
            {
                big.first=a[j]+b[j];
                big.second=j;
                dif = d[j];
            }
        }
        long long ans=big.first;
        for(int j=0;j<n;j++)
        {
            if(j==big.second) continue;
            else ans+=max(a[j],b[j]);
        }
        cout << ans << "\n";
    }
}
