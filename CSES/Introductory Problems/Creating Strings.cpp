#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int fact[9];
void makefact()
{
    fact[0]=1;fact[1]=1;
    for(int i=2;i<=8;i++)
    {
        fact[i]=fact[i-1]*i;
    }
}
void solve()
{
    #define int ll
    string s;
    cin >> s;
    map<char,int> m;
    int sum;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    sum = fact[s.length()];
    for(auto a:m)
    {
        sum = sum/fact[a.second];
    }
    cout << sum << "\n";    
    do
    {
        cout << s << "\n";
    } while (next_permutation(s.begin(),s.end()));
    
    #undef int
}
int main()
{
    int t=1;
    makefact();
    while(t--)
    {
        solve();
    }
}