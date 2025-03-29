#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
#define MAX_V 10000
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin >> n >> m;
        int b, w;
        bool c=true;
        vector<vector<int>>(MAX_V);
        b = ceil((n*m)/2.);
        w=b-1;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(b==0&&w==0) cout << "B";
                else if(c)
                {
                    cout << "B";
                    b--;
                    c=false;
                }
                else
                {
                    w--;
                    cout << "W";
                    c=true;
                }
            }   
            cout << "\n";
        }
    }
}