#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vetor;
    int n,heightzoado,tam=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int aux;
        cin >> aux;
        vetor.push_back(aux);
    }
    sort(vetor.begin(),vetor.end());
    heightzoado = n;
    for(int i=0;i<n;i++){
        int ver=0;
        for(int j=0;j<n;j++){
            if(vetor[i]==vetor[j]) ver++;
        }
        if(ver>tam){
            tam = ver;
        }
    }
    for(int i=0;i<n;i++){
        if(vetor[i]==vetor[i+1]) heightzoado--;
    }
    cout<<tam<<" "<<heightzoado<<endl;
}