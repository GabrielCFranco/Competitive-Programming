#include <bits/stdc++.h>
using namespace std;
long long int BuscaBin(long long int esq, long long int dir, long long int total){
    long long int meio = (esq+dir)/2,soma=(meio*(1+meio)/2),somaDps=((meio+1)*(meio+2))/2/*meio=2,soma=3*/;
    if (total==somaDps) return meio+1;
    if (total>soma && total<somaDps) return meio+1;
    if (total>somaDps) return BuscaBin (meio+1,dir,total);
    return BuscaBin (1,meio-1,total);
}
long long int BuscaBinIn(long long int esq, long long int dir, long long int total,long long k){
    long long int meio = (esq+dir)/2,soma=((meio-k)*((k-1)+(k-(meio-k)))/2),somaDps=(((meio-k)+1)*((k-1)+(k-(meio-k)-1))/2);
    if (total>soma && total<=somaDps) return meio+1;
    if (total>somaDps) return BuscaBinIn(meio+1,dir,total,k);
    return BuscaBinIn(k+1,meio-1,total,k);
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int k,x,aux;
        cin >> k >> x;
        long long int meio,total,soma;
        soma = (2*k)-1;
        meio = (k*(1 + k))/2;
        total = meio+(meio-k);
        if(total<x){
            cout << soma << endl;
        }
        else{
            if(x<=meio-k){
                aux=BuscaBin(1,k-1,x);
                cout << aux <<endl;
            }
            else if(x>meio-k && x<=meio){
                cout << k << endl;
            }
            else if(x>meio){
                long long int final = (k*2)-1;
                aux = BuscaBinIn(k+1,final,x-meio,k);
                cout << aux << endl;
            }
        }
    }
}