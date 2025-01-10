#include <stdio.h>

int main() {
int I=1, J=7;
    while(I<=9 && J>=5){
        while(J>=5){
            printf("I=%d J=%d\n", I, J);
            J-=1;
        }
        J+=3;
        I+=2;
    }
    return 0;
}