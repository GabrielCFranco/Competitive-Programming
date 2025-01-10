#include <stdio.h>
int main() {
    int insert, ano, mes, dia;
    scanf("%d", &insert);
    ano = insert / 365;
    mes = (insert%365)/30;
    dia = (insert%365)%30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}