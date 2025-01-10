#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,k,sol;
        pair<int,int> max;
        map<int,int> m;
        sol = 0,max={-1,-1};
        cin >> n >> k;
        for(int j=0;j<n;j++)
        {
            int aux;
            cin >> aux;
            m[aux]++;
            if(max.second<m[aux])
            {
                max.first=aux;
                max.second=m[aux];
            }
        }
        vector<int>ocr;
        for(auto &a:m)
        {
            if(a.first!=max.first)ocr.push_back(a.second);
        }
        sort(ocr.begin(),ocr.end());
        sol = m.size();
        int som=0;
        for(int j=0;j<ocr.size();j++)
        {
            if(k-ocr[j]>=0)
            {
                k-=ocr[j];
                som++;
            }
            else break;
        }
        cout << sol-som << "\n";
    }
}