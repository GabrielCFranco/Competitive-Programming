#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
int sum = 0;
void fact(int l, int r)
{
    
}
void solve()
{
    vector<int> v;
    int n;
    cin >> n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
        sum+=aux;
    }
    fact(0, n-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}