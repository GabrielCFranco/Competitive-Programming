#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int k,l1,r1,l2,r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int ans=0;
        int tot=0;
        while(l1<=r1)
        {
            int j=0;
            while(1)
            {
                tot=pow(k,j)*l1;
                if(tot>=l2&&tot<=r2) ans++;
                else break;
                j++;
            }
            l1++;
        }
        cout << ans << "\n";
    }
}