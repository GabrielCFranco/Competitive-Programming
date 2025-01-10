#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int tam, aux, ver=0;
        cin >> tam;
        int vec[tam];
        for(int j=0;j<tam;j++){
            cin >> vec[j];
        }
        for(int j=0;j<tam;j++){
            aux = vec[j];
            for(int k=j;k>0;k--){
                if(aux==vec[j-k]){
                    ver++;
                    break;
                }
            }
        }
        if(ver>0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}