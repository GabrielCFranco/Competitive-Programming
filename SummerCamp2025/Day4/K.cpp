#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

void solve()
{
    vector<int> v(4);
    for(int i = 0; i < 4; ++i){
        cin >> v[i];
        v[i]--;
    }

    int w = v[2] - v[0];
    if(v[2] - v[0] != v[3] - v[1]){
        cout <<"-1\n";
        return;
    }
    if(v[1]==1||v[2]==1||v[3]==1)
    {
        cout << "-1\n";
        return;
    }
    int h = v[3] / w;
    if(v[1] - v[0] != 1 || v[3] - v[2] != 1 || v[3]/w != v[2]/w || v[0]/w != v[1]/w != v[0]%w != v[2]%w || v[1]%w != v[3]%w){
        cout << "-1\n";
        return;
    }
    cout << h+1<< " " << w << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}