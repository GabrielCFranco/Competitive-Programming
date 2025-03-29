#include <bits/stdc++.h>
using namespace std;
#define PB push_back

int main()
{
    int n,d;
    cin >> n >> d;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int t, l;
        cin >> t >> l;
        v.push_back({t,l});
    }
    for(int i=1;i<=d;i++)
    {
        int max = -1;
        for(int j=0;j<n;j++)
        {
            v[j].second += 1;
            int prod = v[j].first*v[j].second;
            if(prod>max) max = prod;
        }
        cout << max << "\n";
    }
}