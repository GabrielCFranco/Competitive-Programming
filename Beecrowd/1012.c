#include <stdio.h>
 
int main() {
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    TRIANGULO = (A * C)/2;
    CIRCULO = pi * (C * C);
    TRAPEZIO = (A + B) * C/2;
    QUADRADO = B * B;
    RETANGULO = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);

    return 0;
}