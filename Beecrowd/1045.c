#include <stdio.h>

void troca(double *a, double *b){
    double aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(b>a && b>c) troca(&a,&b);
    if(c>a && c>b) troca(&a,&c);
    
    if(a>=b+c) printf("NAO FORMA TRIANGULO\n");
    else{
        if(a*a == b*b+c*c) printf("TRIANGULO RETANGULO\n");
        if(a*a > b*b+c*c)  printf("TRIANGULO OBTUSANGULO\n");
        if(a*a < b*b+c*c)  printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)   printf("TRIANGULO EQUILATERO\n");
        else if(a==b || a==c || b==c)printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}