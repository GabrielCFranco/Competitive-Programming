#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX 1005
vector<vector<int>> vis;
vector<vector<int>> mat;
bool pathFlag=false;
int solcont=100000005; int cont=0;
vector<char>solvec; vector<char> tempvec;
pair<int,int> A; pair<int,int> B;
int dx[4] = {0,0,1,-1}; int dy[4] = {1,-1,0,0}; char letter[4] = {'R', 'L', 'D', 'U'};
int row, col;
bool isPossible(int x, int y)
{
    if(x>=0&&x<row&&y>=0&&y<col){
        if(mat[x][y]!=1)return true;
        else return false;
    }
    else return false;
}
void bfs(int x, int y)
{
    if(vis[x][y])return;
    if(x==B.first&&y==B.second)
    {
        pathFlag=true;
        if(solcont>cont)
        {
            solcont=cont;
            solvec=tempvec;
            return;
        }
    }
    vis[x][y]=1;
    cont++;
    queue<int> q;
    for(int i=0;i<4;i++)
    {
        int X = x+dx[i]; int Y = y+dy[i];
        if(isPossible(X,Y))
        {
            //q.push();
        }
    }
    while(!q.empty())
    {
    }
    for(int i=0;i<4;i++)
    {
        int X = x+dx[i]; int Y = y+dy[i];
        if(isPossible(X,Y))
        {
            q.push()
            tempvec.push_back(letter[i]);
            bfs(X,Y);
            tempvec.pop_back(); 
        }
    }
    cont--;
    vis[x][y]=0;
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
            else if(aux=='A')
            {
                mat[i].push_back(2);
                A={i,j};
            }
            else if(aux=='B')
            {
                mat[i].push_back(3);
                B={i,j};
            }
            else mat[i].push_back(0);
            vis[i].push_back(0);
        }
    }
    bfs(A.first,A.second);
    if(pathFlag)
    {
        cout << "YES\n";
        cout << solcont << "\n";
        for(int i=0;i<solvec.size();i++)
        {
            cout << solvec[i];
        }
        cout << "\n";
    } 
    else cout << "NO\n";
}