#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> vans;
    for(int i=0;i<n*2;i++)
    {
        int aux;
        cin >> aux;
        v.PB(aux);
    }
    sort(v.begin(),v.end());
    while(v.size()!=1)
    {
        vector<int> va;
        for(int i=0;i<v.size();i+=2)
        {
            if((v[i]>0&&v[i+1]>0)||(v[i]<0&&v[i+1]<0)) va.PB(v[i]+v[i])
        }
    }
}