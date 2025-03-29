#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    string s;
    map<char,int> m;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    stack<char>stk;
    queue<char>q;
    bool one=false;char on;
    for(auto a:m)
    {
        for(int i=0;i<a.second/2;i++)
        {
            q.push(a.first);
            stk.push(a.first);
        }
        if(a.second%2==1)
        {
            if(!one)
            {
                one=true;
                on=a.first;
            }
            else
            {
                cout << "NO SOLUTION\n";
                return;
            }
        }
    }
    while(!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    if(one) cout << on;
    while(!stk.empty())
    {
        cout << stk.top();
        stk.pop();
    }
    cout << "\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}