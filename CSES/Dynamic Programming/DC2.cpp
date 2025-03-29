#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX 1000010
ll tabui[MAX];
ll const m = 1e9+7;
void makemem()
{
    for(int i=0;i<MAX-6;i++)
    {
        int cont=1;
        while(cont<=6)
        {
            tabui[i+cont]=(tabui[i+cont]+(tabui[i]))%m;
            cont++;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << tabui[n] << "\n";

}
int main()
{
    tabui[0]=1;
    makemem();
    int t=1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}