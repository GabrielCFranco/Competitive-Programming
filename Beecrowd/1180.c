#include <stdio.h>
 
int main() {
    int tam,i,val=0,pos=0;
    scanf("%d",&tam);
    int N[tam];
    for(i=0;i<tam;i++){
        scanf("%d",&N[i]);
        if(i==0){
            pos=i;
            val=N[i];   
        }
        else if(N[i]<val){
            pos=i;
            val=N[i];
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",val,pos);
    return 0;
}