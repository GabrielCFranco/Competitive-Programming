#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    if(n%2==1)
    {
        for(int i=n,j=1;i>0;i--,j++)
        {
            if(i%2==1)cout << i << " ";
            else cout << j << " "; 
        }
    }
    else
    {
        for(int i=n,j=0;i>0;i--,j++)
        {
            if(i%2==0)cout << i << " ";
            else cout << j << " "; 
        }
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}