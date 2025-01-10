#include <stdio.h>

int main() {
float A, B, C, total;
    scanf("%f %f %f", &A, &B, &C);
    if ((B - C) < A && A < B + C && A - C < B && B < A + C && A - B < C && C < A + B ){
        total = A + B + C;
        printf("Perimetro = %.1f\n", total);
    }
    else{
        total = ((A + B)/2)* C;
        printf("Area = %.1f\n", total);
    }
    return 0;
}