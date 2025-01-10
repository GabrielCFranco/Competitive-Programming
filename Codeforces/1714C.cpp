#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int num,aux;
        vector<int>numeros;
        cin >> num;
        for(int j=9;j>0;j--){
            if(num>=j){
                num-=j;
                numeros.push_back(j);
            }
        }
        sort(numeros.begin(),numeros.end());
        int tam = numeros.size();
        for(int j=0;j<tam;j++){
            cout << numeros[j];
        }
        cout << endl;
    }
}