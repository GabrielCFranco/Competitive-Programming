#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int T,N,K,total=0;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>K;
        vector<int>soldados;
        for(int j=0;j<N;j++){
            int aux;
            cin >> aux;
            soldados.push_back(aux);
        }
        sort(soldados.begin(),soldados.end());
        int min=1000000001,aux2;
        for(int j=0;j<=N-K;j++){
            aux2 = soldados[(j+K)-1] - soldados[j];
            if(min > aux2) min = aux2;
        }
        if(K==1){
            cout << "0" << endl;
        }
        else cout << min << endl;
    }
}