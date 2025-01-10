#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,m,sol;
        cin >> n >> m;
        sol=0;
        if(n>=m) sol+=n+1;
        else sol+=m+1;
        cout << sol << "\n";
    }
}