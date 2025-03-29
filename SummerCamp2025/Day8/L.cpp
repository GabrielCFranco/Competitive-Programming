#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n;
    cin >> n;
    stack<int> stk;
    for(int i=0;i<n*2;i++)
    {
        string aux; int v;
        cin >> aux >> v;
        if(aux=="in") stk.push(v);
        else if(aux=="out"&&stk.size()!=1)
        {
            cout << stk.top() << " "; stk.pop();
            cout << stk.top() << "\n";
        }
    }
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
