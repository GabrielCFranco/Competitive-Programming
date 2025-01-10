#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int tot=0, ans=0;
        for(int j=0;j<n;j++)
        {
            int aux;
            cin >> aux;
            tot+=aux;
            float r=sqrt(tot);
            if(r<ceil(r)||r>floor(r)||(int(r))%2==0) continue;
            else ans++;
        }
        cout << ans << "\n";
    }
}