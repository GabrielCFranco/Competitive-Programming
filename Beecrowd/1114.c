#include <stdio.h>

int main() {
int senha;
do{
    scanf("%d",&senha);
    if(senha!=2002){
        printf("Senha Invalida\n");
    }
}while(senha!=2002);
printf("Acesso Permitido\n");

    return 0;
}