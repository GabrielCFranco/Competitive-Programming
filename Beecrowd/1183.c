#include <stdio.h>
#define max 12
int main(){
    float V[max][max],Total=0,Divisor=0;
    char Escolha;
    int i,j;
    scanf("%c",&Escolha);
    for(i=0;i<12;i++){
        for(j= 0;j<12;j++){
            if(scanf("%f", &V[i][j])&&i<j){
                    Total += V[i][j];
                    Divisor++;
            }
        }
    }
    if(Escolha=='M'){
        Total/=Divisor;
    }
    printf("%.1f\n",Total);
    return 0;
}