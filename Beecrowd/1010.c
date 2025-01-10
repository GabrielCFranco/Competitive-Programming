#include <stdio.h>
 
int main() {
    int unitsp1, codep1, unitsp2, codep2;
    float valuep1, valuep2;
    scanf("%d %d %f", &codep1, &unitsp1, &valuep1);
    scanf("%d %d %f", &codep2, &unitsp2, &valuep2);
    valuep1 = valuep1 * unitsp1 + valuep2 * unitsp2;
    printf("VALOR A PAGAR: R$ %.2f\n", valuep1);
    return 0;
}