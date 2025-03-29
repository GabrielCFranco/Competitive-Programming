#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    vector<string> vs;
    vs.push_back(s1);vs.push_back(s2);vs.push_back(s3);
    map<char,int> m;
    vector<int> v(3,0);
    if(n==1){cout << "0\n"; return;}
    for(int i=0;i<3;i++)
    {  
        int cont=0;
        for(int j=0;j<n;j++){m[vs[i][j]]++;if(vs[i][j]=='0')cont++;}
        v[i]=cont;
    }
    if(m['0']%n!=0||m['1']%n!=0){cout << "-1\n"; return;}
    if(m['0']==0||m['1']==0){cout << "0\n"; return;}
    if(m['0']>m['1'])
    {
        v[0]=n-v[0];
        v[1]=n-v[1];
        v[2]=n-v[2];
    }
    sort(v.begin(),v.end());reverse(v.begin(),v.end());
    int ans=n-v[0];
    cout << ans << "\n";
}
int main()
{
    //ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}