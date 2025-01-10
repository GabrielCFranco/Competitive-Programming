#include <stdio.h>

int main() {
int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if(X < Y && Y < Z){
        printf("%d\n%d\n%d\n\n", X, Y, Z);
        printf("%d\n%d\n%d\n", X, Y, Z);
    }
    else if(Y < X && X < Z){
        printf("%d\n%d\n%d\n\n", Y, X, Z);
        printf("%d\n%d\n%d\n", X, Y, Z);
    }
    else if(Z < X && X < Y){
        printf("%d\n%d\n%d\n\n", Z, X, Y);
        printf("%d\n%d\n%d\n", X, Y, Z);
    }
    else if(X < Z && X < Y){
        printf("%d\n%d\n%d\n\n", X, Z, Y);
        printf("%d\n%d\n%d\n", X, Y, Z);
    }
    else if(Y < Z && Z < X){
        printf("%d\n%d\n%d\n\n", Y, Z, X);
        printf("%d\n%d\n%d\n", X, Y, Z);
    }
    else if(Z < Y && Y < X){
        printf("%d\n%d\n%d\n\n", Z, Y, X);
        printf("%d\n%d\n%d\n", X, Y, Z);
    }
    return 0;
}