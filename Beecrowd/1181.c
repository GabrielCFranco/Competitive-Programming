#include <stdio.h>
#define max 12
int main(){
    double V[max][max],Total=0;
    char Escolha;
    int Linha=0,i,j;
    scanf(" %d",&Linha);
    scanf(" %c",&Escolha);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){  
        scanf(" %lf", &V[i][j]);
        }
    }
    for(j=0;j<12;j++){
        Total+=V[Linha][j];
        }
    if(Escolha=='M'){
        Total/=12;
    }
    printf("%.1lf\n",Total);
}