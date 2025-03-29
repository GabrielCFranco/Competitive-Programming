#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX_V 202020
pair<int,int> dxy[4]={{0,1},{1,0},{0,-1},{-1,0}};
char cxy[4] = {'R','D','L','U'};
int ans=0;
bool cycle=true;
vector<pair<char,int>> ansv;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int big = (4*n*m)-(2*n)-(2*m);
    if(k>big) cout << "NO\n";
    else
    {
        cout << "YES\n";
        int amount=0;
        int i=0,j=0;
        if(k<=m-1) {
            cout << "1\nR " << amount-m-1 << "\n"; 
            return 0;
        } 
        amount+=m-1;i+=m-1;
        ansv.PB({'R',m-1});
        while(amount<k)
        {
            while(i!=0)
            {
                if(cycle=false  )
                if(amount+n-1>=k)
                {
                    amount+=n-1;
                    ansv.PB({'D',amount-n-1});
                    cycle=true;
                }
                else
                {
                    amount+=n-1;
                    ansv.PB({'D',n-1});
                }
                if(amount+n-1>=k)
                {
                    amount+=n-1;
                    ansv.PB({'U',amount-n-1});
                    cycle=true;
                }
                else
                {
                    amount+=n-1;
                    ansv.PB({'U',n-1});
                }
                ansv.PB({'L',1});
                if(amount+1>k) cycle=false;
                else
                {
                    amount++;
                    i--;
                }
            }
        }
    }

}