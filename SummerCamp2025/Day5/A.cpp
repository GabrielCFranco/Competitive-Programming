#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
vector<vector<int>> v;
vector<pair<int,int>> shor;
vector<pair<int,int>> bver;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        vector<int>r;
        v.PB(r);
        for(int j=0;j<n;j++)
        {
            int aux;
            cin >> aux;
            v[i].PB(aux);
        }
    }
    for(int i=0;i<n;i++)
    {
        int sml=2501;
        for(int j=0;j<n;j++)
        {
            sml=min(v[i][j],sml);
        }
        shor.PB({sml,i});
    }
    for(int i=0;i<n;i++)
    {
        int big=-1;
        for(int j=0;j<n;j++)
        {
            big=max(v[j][i],big);
        }
        bver.PB({big,i});
    }
    sort(shor.begin(),shor.end());
    sort(bver.begin(),bver.end());
    reverse(bver.begin(),bver.end());
    
}