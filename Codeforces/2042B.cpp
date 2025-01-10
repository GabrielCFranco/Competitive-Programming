#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n, cont=0;
        map<int,int> m;
        cin >> n;
        for(int j=0;j<n;j++)
        {
            int aux;
            cin >> aux;
            m[aux]++;
        }
        vector<int> rep;
        for (auto& a : m) {
            rep.push_back(a.second);
        }
        if(rep.size()==1) cout << "1\n";
        else
        {
            int ans=0;
            int turns=n-ceil(n/2.);
            ans+=m.size()*2;
            sort(rep.begin(),rep.end());
            reverse(rep.begin(),rep.end());
            for (const auto& value : rep) {
                if(value-1<=turns&&turns>0){
                    turns-=value-1;
                    if(value-1==0)
                    {
                        ans-=2;
                        turns--;
                    }
                    else ans-=1;
                }
                else break;
            }
            cout << ans << "\n";
        }
    }
}