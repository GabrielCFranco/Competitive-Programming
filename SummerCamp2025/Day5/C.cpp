#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX 200005
void solve()
{
    int n,l;
    cin >> n >> l;
    if(n>l)
    {
        cout << "NIE\n";
        return;
    }
    int fill=0; 
    vector<bool> v(MAX,false);
    for(int i=0;i<n;i++)
    {
        int aux1,aux2;
        cin >> aux1 >> aux2;
        if(aux1==-1&&aux2==-1)fill++;
        else if(aux1==-1||aux2==-1)
        {

        }
        else
        {

        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}