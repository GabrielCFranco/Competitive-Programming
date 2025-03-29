#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define rep(i, a, b) for(int i = a; i < (b); ++i)
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<int> v;
    map<int,int> m;
    rep(i,0,n)
    {
        int aux;
        cin >> aux;
        if(x-aux>0) m[x-aux]++;
        v.PB(aux);
    }
    int cont=0;
    rep(i,0,n)
    {
        if(m[v[i]]>0) 
        {
            if(x/2.!=v[i]&&m[v[i]]>0)
            {
                cout << i+1 << " ";
                cont++;
                m[v[i]]=-1;
            }
            else if(x/2.==v[i]&&m[v[i]]>=1)
            {
                if(m[v[i]]>=2)
                {
                    cout << i+1 << " ";
                    cont++;
                    m[v[i]]=2;
                }
                else if(m[v[i]]==1)
                {
                    cout << i+1 << " ";
                    cont++;
                }
                else if(m[v[i]]==0) continue;
                m[v[i]]--;
            }
        }
    }
    if(!cont)cout << "IMPOSSIBLE\n";
    else cout << "\n";
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}