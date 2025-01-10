#include <stdio.h>
int main() {
    int x = 0;
    float s, t, i;
    while (x != 2){
        for (i = 0; i < 2;){
            scanf("%f", &s);
            if (s < 0 || s > 10)
                printf("nota invalida\n");
            else {
                i++;
                t += s;
            }
        }
        printf("media = %.2f\n", t/2);
        t = 0;
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);
        do {
            if(x > 2 || x < 1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
            }
        }while(x > 2 || x < 1);
    }
    return 0;
}