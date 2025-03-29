#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX_V 10000
int main()
{
    int n;
    cin >> n;
    ll big=-1;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        ll aux;
        cin >> aux;
        m[aux]++;
        big = max(aux,big);
    }
    cout << m[big] << "\n";
}