#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        long long tot=0;
        vector<long long> v;
        for(int j=0;j<n;j++)
        {
            int aux;
            cin >> aux;
            tot+=aux;
            v.PB(aux);
        }
        long long div;
        if((tot%n)!=0){
            cout << "NO\n";
            continue;
        }    
        else div=tot/n;
        long long totI=0, totP=0;
        for(int j=0;j<n;j++)
        {
            if(j%2==0)totP+=v[j];
            else totI+=v[j];
        }
        if(n%2==0)
        {
            if(totI-totP==0) cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            if(abs(totI-totP)==div) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}