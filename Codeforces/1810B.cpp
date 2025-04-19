#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    int i=0;
    ll cont=1;
    vector<int> ans;
    if(n%2==0){
        cout << "-1\n"; 
        return;
    }
    while(i<40)
    {
        if(n==1)
        {
            cout << ans.size() << "\n";
            for(int j=ans.size()-1;j>=0;j--)
            {
                cout << ans[j] << " ";
            }
            cout << "\n";
            return;
        }
        else if(n%2==0)
        {
            cout << "-1\n";
            return;
        }
        else if((n/2)%2==1)
        {
            n-=1;n/=2;
            ans.push_back(2);
        }
        else
        {
            n+=1;n/=2;
            ans.push_back(1);
        }
        i++;
    }
    cout << "-1\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--) solve();
}