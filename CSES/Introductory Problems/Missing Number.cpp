#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

vector<int> v;
int tot;
int sol;

void bb(int l, int r)
{
    if(l==r) sol= l+2;
    else
    {
        int m = ceil((l+r)/2.);
        if(v[m]-v[m-1]==2) sol = m+1;
        else if(v[m]==m+1) bb(m,r);
        else if(v[m]==m+2) bb(l,m);
    }

}
int main()
{
    cin >> tot;
    if(tot==2)
    {
        int aux;
        cin >> aux;
        if(aux==1) cout << "2\n";
        else cout << "1\n";
    }
    else
    {
        for(int i=0;i<tot-1;i++)
        {
            int aux;
            cin>>aux;
            v.PB(aux);
        }
        sort(v.begin(),v.end());
        bb(0,v.size()-1);
        cout << sol << "\n";
    }

}