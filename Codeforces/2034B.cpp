#include <bits/stdc++.h>
using namespace std;
string v;
int n, m, k, j;
int cont, paint;
void two(int pos)
{
    if(paint>=k||pos==n-1) return;
    else
    {
        paint++;
        v[pos] = '1';
        if(v[pos+1]=='0') two(pos+1);
        else two(pos-1);
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n >> m >> k;
        v.clear();
        for(int k=0;k<n;k++)
        {
            char aux;
            cin >> aux;
            v.push_back(aux);
        }
        cont=0;
        int ans=0;
        for(j=0;j<n;j++)
        {
            if(v[j]=='0') cont++;
            else cont=0;
            if(cont>=m)
            {
                paint=0;
                two(j);
                cont=0;
                ans++;
            }
        }
        cout << ans << "\n";
    }
}