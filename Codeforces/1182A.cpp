#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    while(cin >> n){
        if(n%2==1){
            cout << "0" << endl;
        }
        else{
            ll i=1;
            ll cont=1;
            while(i<=n/2){
                cont*=2;
                i++;
            }
            cout << cont << endl;
        }
    }
}