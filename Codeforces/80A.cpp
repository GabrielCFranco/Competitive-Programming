#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,m;
    cin >> n >> m;
    n++;
    while(n<=m){
        int cheq=0;
        for(int i=2;i<n;i++){
            if(n%i==0) cheq++;
        }
        if(cheq>0) n++;
        else{
            if(n==m){
                cout<<"YES\n";
                break;
            }
            else{
                cout << "NO\n";
                break;
            }
        }
    }
    if(n>m) cout << "NO\n";
}