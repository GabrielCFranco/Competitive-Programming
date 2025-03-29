#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll pos, sol;
vector<ll> v;
vector<bool> vb;
int main()
{
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++)
    {
        ll aux;
        cin >> aux;
        v.PB(aux);
        vb.PB(true);
    }
    int j=n-1;
    for(int i=n-2;i>=0;i--)
    {
        if(vb[i]==false) continue;
        int pos = lower_bound(v.begin(), v.end(), v[i]*2) - v.begin();  
        pos=n-pos;
        if(pos!=0)
        {
            if(v[j]>=v[i]*2&&v[j]) 
            {
                vb[i]=false; vb[j]=false;
                sol++;
                while(!vb[j]){j--;}
            }
        }
        pos=0;
    }
    cout << sol << "\n";
}