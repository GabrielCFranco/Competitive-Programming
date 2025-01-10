#include <bits/stdc++.h>
using namespace std;


long long lcm(long long a, long long b){
    long long temp = gcd(a,b);
    return (a*b)/temp;
}


int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        long long a,b, ans;
        cin >> a >> b;
        ans = lcm(a,b);
        cout << ans << "\n";
    }
}