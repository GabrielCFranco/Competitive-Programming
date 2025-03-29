#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MAX 1002

int vis[MAX][MAX]; int mat[MAX][MAX]; char reg[MAX][MAX];
bool pathFlag=false; char last; int cont=0;
pair<int,int> A; pair<int,int> B;
int dx[4] = {0,0,1,-1}; int dy[4] = {1,-1,0,0}; char letter[4] = {'R', 'L', 'D', 'U'};
int row, col;

bool isPossible(int x, int y)
{
    if(x>=0&&x<row&&y>=0&&y<col&&vis[x][y]==0){
        if(mat[x][y]!=1)return true;
        else return false;
    }
    else return false;
}
void bfs(int x, int y)
{
    vis[x][y]=1;
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        pair<int,int> aux = q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int X = aux.first+dx[i]; int Y = aux.second+dy[i];
            if(isPossible(aux.first+dx[i],aux.second+dy[i]))
            {
                vis[X][Y] = 1;
                reg[X][Y] = letter[i];
                if(X==B.first&&Y==B.second)
                {
                    pathFlag=true;
                    break;
                }
                else q.push({X,Y});
            }
        }
        if(pathFlag) break;
    }
}
int main()
{
    cin >> row >> col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            char aux;
            cin >> aux;
            if(aux=='#')mat[i][j]=1;
            else if(aux=='A')
            {
                mat[i][j]=2;
                A={i,j};
            }
            else if(aux=='B')
            {
                mat[i][j]=3;
                B={i,j};
            }
            else mat[i][j]=0;
            vis[i][j]=0 ;
        }
    }
    bfs(A.first,A.second);
    if(pathFlag)
    {
        
        cout << "YES\n";
        int X = B.first; int Y = B.second;
        string s;
        while(mat[X][Y]!=2)
        { //RLDU
            cont++;
            s.push_back(reg[X][Y]);
            for(int i=0;i<4;i++)
            {
                if(reg[X][Y]==letter[i]){X=X-dx[i];Y=Y-dy[i];break;}
            }
        }
        reverse(s.begin(),s.end());
        cout << cont << "\n";
        cout << s << "\n";
    } 
    else cout << "NO\n";
}