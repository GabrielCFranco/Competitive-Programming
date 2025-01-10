#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[1000005];
ll memoriz(ll n){
    ll aux=0;
    if(dp[n]!=-1) return dp[n];
    if(n==0) return 1;
    for(ll i=1;i<=6;i++){
        if(i>n) break;
        else{
            aux+=memoriz(n-i);
        }
    }
    return dp[n] = aux % 1000000007;
}
int main(){
    ll n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    n = memoriz(n);
    cout << n << endl;
}