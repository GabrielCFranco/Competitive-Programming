#include <stdio.h>
 
int main() {
    char nome[50];
    double salary, sell, TOTAL;
    scanf("%s %lf %lf", &nome, &salary, &sell);
    sell = sell * 0.15 + salary;
    printf("TOTAL = R$ %.2lf\n", sell);

    return 0;
}