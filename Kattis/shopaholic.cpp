#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t, aux;
    cin >> t;
    vector<ll>fazzuely;
    for(ll i=0;i<t;i++){
        cin >> aux;
        fazzuely.push_back(aux);
    }
    sort(fazzuely.begin(),fazzuely.end());
    ll cont=0, rest = t%3;
    ll k=0+rest;
    do{
        cont+=fazzuely[(k)];
        k+=3;
    }while(t!=k);
    cout << cont << endl;
}