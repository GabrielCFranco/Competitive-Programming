#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll unsigned long long
void solve()
{
    int n,m,k;
	int ans=0;
	cin >> n >> m >> k;
	vector<vector<int>> mat(n,vector<int>(m));
	vector<vector<int>> vish(n,vector<int>(m));
	vector<vector<int>> visv(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char aux;
			cin >> aux;
			if(aux=='*')
			{
				mat[i][j]=1;
				vish[i][j]=1;
				visv[i][j]=1;
			} 
			else
			{
				mat[i][j]=0;
				vish[i][j]=0;
				visv[i][j]=0;
			}
		}
	}
	if(n>=k)
	{
		for(int j=0;j<m;j++)
		{
			for(int i=0;i<n;i++)
			{
				if(mat[i][j]==0&&visv[i][j]==0)
				{
					visv[i][j]=1;
					int cont = 1;
					if(cont>=k) ans++;
					for(int x=i+1;x<n;x++)
					{
						if(mat[x][j]==0)
						{
							visv[x][j]=1;
							cont++;
							if(cont>=k)ans++;
						}
						else break;
					}
				}
			}
		}
	}
	if(m>=k)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(mat[i][j]==0&&vish[i][j]==0)
				{
					vish[i][j]=1;
					int cont = 1;
					if(cont>=k) ans++;
					for(int x=j+1;x<m;x++)
					{
						if(mat[i][x]==0)
						{
							vish[i][x]=1;
							cont++;
							if(cont>=k)ans++;
						}
					}
				}
			}
		}
	}
	cout << ans << "\n";
	}
int main()
{
    int t=1;
    //cin >> t;
    while(t--) solve();
}