#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int main()
{
    while(1)
    {
        int a,b;
        cin >> a >> b;
        cout << lcm(a,b)-gcd(a,b) << "\n";
    }
}