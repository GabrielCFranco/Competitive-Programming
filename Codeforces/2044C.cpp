#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int ta = m, tb = m;
        int ans=0;
        if(ta>=a)
        {
            ta-=a;
            ans+=a;
        }
        else
        {
            ans+=ta;
            ta=0;
        }
        if(tb>=b)
        {
            tb-=b;
            ans+=b;
        }
        else
        {
            ans+=tb;
            tb=0;
        }
        ta+=tb;
        if(ta>=c) ans+=c;
        else ans+=ta;
        cout << ans << "\n";
    }
}