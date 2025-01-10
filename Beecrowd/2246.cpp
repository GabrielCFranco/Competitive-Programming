#include <bits/stdc++.h>
using namespace std;
int mat[405][405];
bool visited[405][405];
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
int row, col, num, cont;
bool ver(int x, int y)
{
    if(x>=0&&x<row&&y>=0&&y<col) return true;
    return false;
}
void search(int x, int y)
{
    if(ver(x,y) && visited[x][y] == false && num == mat[x][y])
    {
        visited[x][y] = true;
        for(int i=0;i<4;i++)
        {
            search(x+dx[i],y+dy[i]);
        }   
        cont++;
    }
}
int main()
{
    int aux;
    cin >> row >> col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin >> aux;
            mat[i][j] = aux;
        }
    }
    memset(visited,false,sizeof(visited));
    int sol = 1e7;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(visited[i][j]==false)
            {
                cont = 0; num = mat[i][j];
                search(i,j);
                sol = min(sol, cont);
            }
        }
    }
    cout << sol << "\n";
}