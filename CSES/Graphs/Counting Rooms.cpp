#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX 1005
vector<vector<int>> vis;
vector<vector<int>> mat;
int dx[4] = {0,0,1,-1}; int dy[4] = {1,-1,0,0};
int row, col;
bool isPossible(int x, int y)
{
    if(x>=0&&x<row&&y>=0&&y<col){
        if(mat[x][y]==0&&vis[x][y]==0)return true;
        else return false;
    }
    else return false;
}
void dfs(int x, int y)
{
    if(vis[x][y]) return;
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int X = x+dx[i]; int Y = y+dy[i];
        if(isPossible(X,Y))
        {
            dfs(X,Y);
        }
    }
}
int main()
{
    cin >> row >> col;
    for(int i=0;i<row;i++)
    {
        vector<int> r;
        mat.push_back(r); vis.push_back(r);
        for(int j=0;j<col;j++)
        {
            char aux;
            cin >> aux;
            if(aux=='#')mat[i].push_back(1);
            else mat[i].push_back(0);
            vis[i].push_back(0);
        }
    }
    int sol=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat[i][j]==0)
            {
                if(!vis[i][j])
                {
                    dfs(i,j);
                    sol++;
                }
            }
        }
    }
    cout << sol << "\n";
}