#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX 200200
#define int ll
vector<vector<int>> v1(MAX);
vector<bool> visited1(MAX);
map<int,vector<int>> m1;

vector<vector<int>> v2(MAX);
vector<bool> visited2(MAX);
map<int,vector<int>> m2;
void init()
{
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            v1[i].clear();
        }
        for(int j=0;j<v2[i].size();j++)
        {
            v2[i].clear();
        }
        visited1[i]=false;
        visited2[i]=false;
    }
    m1.clear();m2.clear();
}
void addedge1(int a,int b)
{
    v1[a].PB(b);
    v1[b].PB(a);
}
void addedge2(int a,int b)
{
    v2[a].PB(b);
    v2[b].PB(a);
}
void dfs1(int x)
{
    if(visited1[x]==true) return;
    visited1[x]=true;
    vector<int> temp;
    if(v1[x].size()==1&&x!=0)
    {
        temp.PB(1);
        m1[x]=temp;
        return;
    }
    for(auto a:v1[x])
    {   
        if(visited1[a]==0)
        {
            dfs1(a);
            temp.PB(accumulate(m1[a].begin(),m1[a].end(),0));
        }
    }
    sort(temp.begin(),temp.end());
    m1[x]=temp;
}  
void dfs2(int x)
{
    if(visited2[x]==true) return;
    visited2[x]=true;
    vector<int> temp;
    if(v2[x].size()==1&&x!=0)
    {
        temp.PB(1);
        m2[x]=temp;
        return;
    }
    for(auto a:v2[x])
    {   
        if(visited2[a]==0)
        {
            dfs2(a);
            temp.PB(accumulate(m2[a].begin(),m2[a].end(),0));
        }
    }
    sort(temp.begin(),temp.end());
    m2[x]=temp;
} 
void solve()
{
    init();
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin >> x >> y;
        x--;y--;
        addedge1(x,y);
    }
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin >> x >> y;
        x--;y--;
        addedge2(x,y);
    }
    dfs1(0);
    dfs2(0);
    if(m1[0]==m2[0]) cout << "YES\n";
    else cout << "NO\n";
}
#undef int
int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}