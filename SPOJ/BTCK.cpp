#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t,aux;
    cin >> t;
    for(int i=0;i<t;i++){
        ll permutA[] = {0,1,2,3,4,5,6,7,8,9};
        ll result;
        bool ver = false;
        vector<int>permutN;
        for(int j=0;j<10;j++){
            cin >> aux;
            permutN.push_back(aux);
        }
        cin >> result;
        do{
            ll j=0,cont=0;
            while(j<10){
                cont=cont+(permutA[j]*permutN[j]);
                j++;
            }
            if(cont<=result){
                ver=true;
                int j=0;
                while(j<10){
                cout << permutA[j] << " ";
                j++;
                }
                break;
            }
        }while(next_permutation(permutA,permutA+10));
        if(ver==false) cout << "-1";
        cout << "\n";
    }
}