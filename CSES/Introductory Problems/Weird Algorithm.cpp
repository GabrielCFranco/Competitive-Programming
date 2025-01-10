#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int main()
{
    ll n;
    cin >> n;
    while(n!=1)
    {
        cout << n << " ";
        if(n%2==1)
        {
            n*=3;
            n+=1;
        }
        else n>>=1;
    }
    cout << n <<"\n";
}