#include <bits/stdc++.h>
using namespace std;
long long int BuscaBin(long long int esq, long long int dir, long long int total){
    long long int meio = (esq+dir)/2, aux = meio+1, soma = ((aux*aux)+aux)/2;
    if (esq > dir) return esq;
    if (total==soma) return aux;
    if (soma>total) return BuscaBin (0,meio-1,total);
    return BuscaBin (meio+1,dir,total);
}
int main(){
    long long int n, alt, total;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> total;
        alt = BuscaBin(0,total,total);
        cout << alt << endl;
    }

}