#include <bits/stdc++.h>
using namespace std;
int BuscaBin (vector<int>& vetor,int esq, int dir, int num) {
    int meio = (esq+dir)/2;
    if (esq > dir) return -1;
    if (vetor[meio] == num) return meio;
    if (num > vetor[meio]) return BuscaBin (vetor,meio+1,dir,num);
    return BuscaBin (vetor,esq,meio-1,num);
}
int main(){
    long long int n,m,a,c,x0,aux,cont=0;
    vector<int>vetorRep;
    cin >> n >> m >> a >> c >> x0;
    vetorRep.push_back(x0);
    for(int i=0;i<n;i++){
        aux = ((a*vetorRep[i])+c)%m;
        vetorRep.push_back(aux);
    }

    for(int i=1;i<=n;i++){
        if(BuscaBin(vetorRep,1,vetorRep.size()-1,vetorRep[i])!=-1)cont++;
    }
    cout << cont <<endl;

}