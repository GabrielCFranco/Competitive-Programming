#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int INF = 0x3f3f3f3f;
void solve()
{
    string s;
    cin >> s;
    vector<tuple<int, int, char>> pb;
    int cont=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            pb.push_back({cont,i,'('});
            cont++;
        }
        else 
        {
            pb.push_back({cont,i,')'});
            cont--;
        }
    }
    sort(pb.begin(),pb.end(), [](tuple<int, int, char> a, tuple<int, int, char> b){
        int a1,a2,b1,b2;
        char a3, b3;
        tie(a1, a2, a3) = a;
        tie(b1, b2, b3) = b;
        if(a1 == b1) return a2 > b2;
        return a1 < b1;
    });
    for(int i=0;i<pb.size();i++)
    {
        int a1, a2; char a3;
        tie(a1, a2, a3) = pb[i];
        cout << a3 << "";
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