#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char chars[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
set<char> se;
ifstream f("in");
void solve()
{
    int ans=-1;
    string s;
    getline(f,s);
    vector<int> v;
    for(int i=0;i<s.length();i++)
    {
        if(se.find(s[i])==se.end()) v.push_back(i);
    }
    v.push_back(s.length());
    int last=0;
    for(int i=0;i<v.size();i++)
    {
        int cap = v[i];
        for(int j=last;j<cap;j++)
        {
            for(int k=j;k<cap;k++)
            {
                string rev = s.substr(j,k-j+1);
                string aux = rev;
                reverse(rev.begin(),rev.end());
                if(aux==rev) ans = max(ans,(int)aux.length());
            }
        }
        last=cap+1;
    }
    cout << ans << "\n";
    f.close();
}
int main()
{
    for(auto c:chars)se.insert(c);
    int t=100;
    string first;
    getline(f,first);
    t = stoi(first);
    //cin >> t;
    while(t--)solve();
    f.close();
}