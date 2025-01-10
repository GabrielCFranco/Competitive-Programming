#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int pes, aux;
        vector<int> pos;
        cin >> pes;
        int melhorc = pes;
        for(int j=0;j<pes;j++){
            cin >> aux;
            pos.push_back(aux);
        }
        int piorc=0;
        for(int j=0;j<pes;j++){
            int k,cont=1;
            k=j;
            while(pos[k+1]-pos[k]<=2&&k+1<pes){
                cont++;
                k++;
            }
            k=j;
            while(pos[k]-pos[k-1]<=2&&k-1>=0){
                cont++;
                k--;
            }
            if(cont>piorc) piorc = cont;
            if(cont<melhorc) melhorc = cont;        
        }
        cout << melhorc <<" "<< piorc <<endl;
        
    }
}