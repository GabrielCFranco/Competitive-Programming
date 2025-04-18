#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
vector<string> v(6,"0");
void fill_v()
{
    v[1]="-1",v[3]="-1",v[2]="66", v[4]="3366",v[5]="36366";
}
void solve()
{
    int n;
    cin >> n;
    if(n<=5) cout << v[n] << "\n";
    else
    {
        if(n%2==0)
        {
            for(int i=0;i<n-4;i++)
            {
                cout << "3";
            }
            cout << v[4] << "\n";            
        }
        else
        {
            for(int i=0;i<n-5;i++)
            {
                cout << "3";
            }
            cout << v[5] << "\n";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fill_v();
    int t=1;
    cin >> t;
    while(t--) solve();
}