#include <stdio.h>
//this question could be easily solved with a hashmap, but at the time I didnt know how to implement it
int main() {
int D; 
    scanf("%d", &D);
    switch(D){
        case 61:
        printf("Brasilia\n");
        break;
        case 71:
        printf("Salvador\n");
        break;
        case 11:
        printf("Sao Paulo\n");
        break;
        case 21:
        printf("Rio de Janeiro\n");
        break;
        case 32:
        printf("Juiz de Fora\n");
        break;
        case 19:
        printf("Campinas\n");
        break;
        case 27:
        printf("Vitoria\n");
        break;
        case 31:
        printf("Belo Horizonte\n");
        break;
        default:
        printf("DDD nao cadastrado\n");
        break;
        
    }
    return 0;
}