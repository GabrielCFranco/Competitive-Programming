#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string conta;
    cin >> conta;
    int tam = conta.size();
    if(tam==1){
        cout << conta[0];
    }
    else{
        int i=0;
        vector<int> vetor;
        for(i=0;i<tam;i+=2){
            vetor.push_back((conta[i]-'0'));
        }
        sort(vetor.begin(),vetor.end());
        int tamVec= vetor.size();
        int ultimo;
        for(i=0;i<tamVec-1;i++){
            cout <<vetor[i]<<"+";
            ultimo=vetor[i+1];
        }
        cout << ultimo;
    }
}