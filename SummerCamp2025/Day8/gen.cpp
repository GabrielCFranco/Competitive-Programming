#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
mt19937 rng((int) chrono::steady_clock::now().time_since_epoch().count());
int main()
{
    int t=1;
    while(t--)
    {
        int n = (rng()%5)+4;int m = (rng()%7) + 5;
        map<pair<int,int>,bool> ma;
        vector<pair<int,int>> gen;
        ma[{-1,-1}]=true;
        cout << n << " " << m << "\n";
        for(int i=0;i<m;i++)
        {
            int a=-1,b=-1;
            while(a==b||ma[{a,b}]==true||((b%n-a%n)+n)%n == 1)
            {
                a=(rng()%n)+1;
                b=(rng()%n)+1;
                if(a>b) swap(a,b);
            }
            ma[{a,b}]=true;
            gen.push_back({a,b});
        }
        sort(gen.begin(),gen.end());    
        for(int i=0;i<gen.size();i++)
        {
            cout << gen[i].first << " " << gen[i].second << "\n";
        }
        cout << "\n";
    }
}