#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int x;
    int b=0,s=0;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        aux = abs(aux);
        if(i==0) x=aux;
        else
        {
            if(aux>x)b++;
            else s++;
        }
        v.push_back(aux);
    }
    int m=n/2;
    if(s==b)
    {
        cout << "YES\n";
        return;
    }
    else if(n%2==0&&)

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1; 
    cin >> t;
    while(t--) solve();
}