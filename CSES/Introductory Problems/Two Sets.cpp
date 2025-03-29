#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
void solve()
{
    #define int ll
    int n;
    cin >> n;
    int sum = (n*(1+n))/2;
    if(sum%2==1) cout << "NO\n";
    else
    {
        int aux1=sum/2,aux2=sum/2;
        vector<int> ans1, ans2;
        int cont=n;
        while(aux1!=0||aux2!=0)
        {
            if(aux1-cont>=0)
            {
                aux1-=cont;
                ans1.push_back(cont);
            } 
            else
            {
                aux2-=cont;
                ans2.push_back(cont);
            }
            cont--;
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        cout << "YES\n";
        cout << ans1.size() << "\n";
        for(int i=0;i<ans1.size();i++)
        {
            cout << ans1[i] << " ";
        }
        cout << "\n";
        cout << ans2.size() << "\n";
        for(int i=0;i<ans2.size();i++)
        {
            cout << ans2[i] << " ";
        }
        cout << "\n";
    }
    #undef int
}
int main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}