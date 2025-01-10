#include <stdio.h>

int main(){
    double amount;
    scanf("%lf", &amount);

    int cents = amount*100;

    int valores[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    int qtd;
    int i = 0;
    while(i<12){
        qtd = cents/valores[i];
        cents = cents%valores[i];

        if (i < 6){
            printf("%d nota(s) de R$ %.2f\n", qtd, valores[i]/100.00);
        }else{
            if (i == 6)
                printf("MOEDAS:\n");
            printf("%d moeda(s) de R$ %.2f\n", qtd, valores[i]/100.00);
        }
        i++;
    } 
    return 0;
}
