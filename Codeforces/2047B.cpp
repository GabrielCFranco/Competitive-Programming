#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        string s;
        map<char,int> m;
        for(int j=0;j<n;j++)
        {
            char aux;
            cin >> aux;
            m[aux]++;
            s.push_back(aux);
        }
        pair<char,int> big={' ',-1}, small = {' ',12};
        for(auto a : m)
        {
            if(a.second>=big.second)
            {
                big.first = a.first;
                big.second = a.second;
            }
            if(a.second==small.second) continue;
            if(a.second<=small.second)
            {
                small.second = a.second;
                small.first = a.first;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(s[j]==small.first)
            {
                s[j]=big.first;
                break;
            }
        }
        cout << s << "\n";
    }
}