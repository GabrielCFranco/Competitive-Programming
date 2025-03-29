//reminder: always check for x/0
#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int h, w;
void solve()
{
    vector<int> v;
    int aux;
    for(int i=0;i<4;i++)
    {
        cin >> aux;
        aux--;
        v.push_back(aux);
    }
    if(v[1]-v[0]==1&&v[3]-v[2]==1)
    {
        w=v[2]-v[0];
        if(w<2)
        {
            cout << "-1\n";
            return;
        }
        h=((v[3])/w)+1;
        vector<pair<int,int>> vc;
        for(int i=0;i<4;i++) vc.PB({v[i]/w,v[i]%w});
        if
        (
            vc[0].first==vc[1].first&&
            vc[2].first==vc[3].first&&
            vc[0].second==vc[2].second&&
            vc[1].second==vc[3].second
        ) cout << h << " " << w << "\n";
        else cout << "-1\n";
    }
    else cout << "-1\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}