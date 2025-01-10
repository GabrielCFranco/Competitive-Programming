#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

int main()
{
    ll n;
    vector<ll>v;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        ll aux; cin >> aux;
        v.PB(aux);
    }
    ll sol=0;
    for(int i=1;i<v.size();i++)
    {
        ll aux;
        if(v[i-1]>v[i])
        {
            aux=v[i-1]-v[i];
            sol+=aux;
            v[i]+=aux;
        }
    }
    cout << sol << "\n";
}