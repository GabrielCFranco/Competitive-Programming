#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
map<pair<int,int>,bool> blocin;
map<pair<int,int>,bool> blocout;
bool possible=true;
void solve()
{
    int n,m;
    cin >> n >> m;
    string ans = "";
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        x--;y--;
        x=(x+n)%n;y=(y+n)%n;
        if(x>y) swap(x,y);
        if(blocin[{x,y}]==true)
        {   
            if(blocout[{x,y}]==true)
            {
                possible = false;
            }
            else
            {
                ans.push_back('o');
                for(int k=x+1;k<y;k++)
                {
                    for(int l=(y+1)%n;(l%n)!=x;l++)
                    {
                        int a=k,b=l;
                        if(a>b) swap(a,b);
                        blocout[{a,b}]=true;
                    }
                }
            }
        }
        else
        {
            ans.push_back('i');
            for(int k=x+1;k<y;k++)
            {
                int l=(y+1)%n;
                while((l%n)!=x)
                {
                    int a=k,b=l;
                    if(a>b) swap(a,b);
                    blocin[{a,b}]=true;
                    l++;
                }
            }
        }
    }
    if(possible)
    {
        cout << ans << "\n";
    }
    else
    {
        cout << "Impossible\n";
    }
    return;
}
int main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}