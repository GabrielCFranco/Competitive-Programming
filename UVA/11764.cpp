#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,lowj=0,highj=0;
        cin >> n;
        int par[n];
        for(int j=0;j<n;j++){
            cin >> par[j];
        }
        for(int j=0;j<n-1;j++){
            if(par[j]<par[j+1]) highj++;
            else if(par[j]>par[j+1]) lowj++;
        }
        cout << "Case " <<i+1<<": "<<highj<<" "<<lowj<<endl;
    }
}