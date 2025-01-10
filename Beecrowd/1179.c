#include <stdio.h>

int main() {

    int x, even[5], odd[5];

    for (int i = 0, a = 0, b = 0; i < 15; i++) { 
        scanf("%d", &x);
        if (x % 2) {
            odd[a] = x;
            a++;
            if (a > 4) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, odd[j]);
                    odd[j] = 0;
                }    
                a = 0;
            }
        } else {
            even[b] = x;
            b++;
            if (b > 4) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, even[j]);
                    even[j] = 0;
                }    
                b = 0;
            }
        }
    }

    for (int i = 0; odd[i] != 0; i++) {
        printf("impar[%d] = %d\n", i, odd[i]);
    }
    for (int i = 0; even[i] != 0; i++) {
        printf("par[%d] = %d\n", i, even[i]);
    }

    return 0;
}