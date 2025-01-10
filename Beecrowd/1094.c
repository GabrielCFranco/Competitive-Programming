#include <stdio.h>

int main() {
    int testes,x,i=1,total=0;
    float coelhos=0,ratos=0,sapos=0;
    char k;
    scanf("%d", &testes);
    for(i;i<=testes;i++){
        scanf("%d %c",&x, &k);
        switch(k){
            case 67://Coelhos
            coelhos+=x;
            total+=x;
            break;
            case 82://Ratos
            ratos+=x;
            total+=x;  
            break;
            case 83://Sapos
            sapos+=x;
            total+=x;
            break;
        }
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %.0f\n",coelhos);
    printf("Total de ratos: %.0f\n",ratos);
    printf("Total de sapos: %.0f\n",sapos);
    printf("Percentual de coelhos: %.2f %%\n", coelhos = (coelhos/total)*100);
    printf("Percentual de ratos: %.2f %%\n", ratos = (ratos/total)*100);
    printf("Percentual de sapos: %.2f %%\n", sapos = (sapos/total)*100);
    

    return 0;
}