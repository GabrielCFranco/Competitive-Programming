#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll mult(ll a, ll b)
{
    return (a*b);
}
ll fastexp(ll x, ll k)
{
    if(k == 0) return 1;
    ll k_2 = fastexp(x, k/2);
    if(k % 2 == 1) return mult(mult(k_2,k_2),x);
    else return mult(k_2,k_2);
}
int main()
{
    int p;
    cin >> p;
    //p^n-y=m*p
    for(int x=0;x<p;x++)
    {
        for(int n=0;n<20;n++)
        {
            ll aux = fastexp(x,n);
            if(aux>p)
            cout 
            <<" x: "         << x     <<" |"
            <<" n: "         << n     <<" |"
            <<" y: "         << aux   <<" |"
            <<" (p^n)modP: " << aux%p <<"\n";
        }
    }

}