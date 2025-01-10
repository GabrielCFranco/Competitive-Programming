#include <stdio.h>
#define n 101
int main(){
    int pedras, sapos, pos, dist, i, j,aux;
    scanf("%d", &pedras);
    scanf("%d", &sapos);
    int vetor[n];
    for(i=1;i<=pedras;i++){
        vetor[i]=0;
    }
    for(i=1;i<=sapos;i++){
        scanf("%d",&pos);
        scanf("%d",&dist);
        aux=pos;
        while(0<pos){
            vetor[pos]=1;
            pos-=dist;
        }
        pos=aux;
        while(pedras>=pos){
            vetor[pos]=1;
            pos+=dist;
        }
    }
    for(i=1;i<=pedras;i++){
        printf("%d\n",vetor[i]);
    }
    return 0;
}