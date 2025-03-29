#include <bits/stdc++.h>
#define PB push_back
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
int ans, cont, n, x;
vector<int> v;
void search(int pos)
{
    int big = v[pos]*x, c=cont;
    for(int i=pos+1;i<n;i++)
    {
        if(v[i]>=big)
        {
            c++;
            big=v[i];   
        }
        else break;
    }
    ans = max(ans,c);
}
void solve()
{
    cin >> n >> x;
    v.clear();
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        v.PB(aux);
    }
    ans=1, cont=1;
    for(int i=1;i<n;i++)
    {
        cont++;
        if(v[i]>=v[i-1]) ans = max(ans,cont);
        else
        {
            if(v[i]*x>=v[i-1])search(i);
            cont=1;
        }
    }
    cout << ans << "\n";
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)solve();
}