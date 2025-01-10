#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n, k, ans=0;
        vector<int> v;
        cin >> n >> k;
        for (int j=0;j<n;j++){
            int aux;
            cin >> aux;
            v.push_back(aux);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(),v.end());
        int tot=0;
        int j=0;
        while(tot<k){
            tot+=v[j];
            if(tot>k||j==v.size()) {
                ans+=k-(tot-v[j]);
                break;
            }
            j++;
        }
        cout << ans <<"\n";
    }
}