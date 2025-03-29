#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,m,firstx,firsty,lastx=0,lasty=0;
        cin >> n >> m;
        int sol=0;
        for(int j=0;j<n;j++)
        {
            int aux1, aux2;
            cin >> aux1 >> aux2;
            if(j==0)
            {
                firstx=aux1;
                firsty=aux2;
            }
            lastx+=aux1;lasty+=aux2;
        }
        lastx+=m;lasty+=m;
        cout << ((lastx-firstx)*2)+((lasty-firsty)*2) << "\n";
    }
}