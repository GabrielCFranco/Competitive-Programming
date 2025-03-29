#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll pos,sol;
vector<ll> v;
int main()
{
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++)
    {
        ll aux;
        cin >> aux;
        v.PB(aux);
    }
    sol=0;
    for(int i=0;i<n-1;i++)
    {
        int pos = lower_bound(v.begin(), v.end(), v[i]*2) - v.begin();
        pos=n-pos;
        sol+=pos;
        pos=0;
    }
    cout << sol << "\n";
}