#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll,ll>> v;
    bool possible = true;
    for(int i=0;i<n;i++)
    {
        ll auxf,auxs;
        cin >> auxf >> auxs;
        v.push_back({auxf,auxs});
    }
    for(int i=0;i<n;i++)
    {
        ll temp = v[i].first;
        if(temp==i+1) continue;
        else 
        {
            if(v[(temp-1)].second!=v[i].second) 
            {
                possible=false;
                break;
            }
        }
    }
    if(possible) cout << "Y\n";
    else cout << "N\n";
}