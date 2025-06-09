#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
vector<vector<int>> t(200005);
vector<int> p(200005);
void dfs(int n)
{
    stack<int> s;
    s.push(n);
    while(!s.empty())
    {
        int x = s.top();
        p[x]=1;
        s.pop();
        for(auto a:t[x])
        {
            s.push(a);
            p[a] = 1;
            p[x] += p[a];
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    for(int i=1;i<=n-1;i++)
    {
        int aux; cin >> aux;
        t[aux-1].push_back(i);
    }
    dfs(0);
    for(int i=0;i<n;i++)
    {
        cout << p[i] - 1 << " ";
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) solve();
}