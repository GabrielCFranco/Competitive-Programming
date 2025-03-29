#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

int main()
{
    bool possible=false;
    ll t, d, m;
    cin >> t >> d >> m;
    ll last=0,aux=0;
    for(int i=0;i<m;i++)
    {
        cin >> aux;
        if(aux-last>=t) possible = true;
        last = aux;
    }
    if(d-aux>=t || possible) cout << "Y\n";
    else cout << "N\n";
}