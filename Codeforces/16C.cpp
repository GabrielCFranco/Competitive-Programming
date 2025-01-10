#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin >> a >> b;
    long long x,y;
    cin >> x >> y;
    long long aux;
    aux = gcd(x,y);
    x=x/aux;
    y=y/aux;
    aux=min(a/x,b/y);
    cout << x*aux << " " << y*aux<<endl;
    return 0;
}