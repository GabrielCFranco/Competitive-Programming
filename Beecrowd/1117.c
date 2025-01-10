#include <stdio.h>
int main() {
    float x,y, media;
    do{
        scanf("%f",&x);
        if(0>x||x>10){
            printf("nota invalida\n");
        }
    }while(0>x||x>10);
    do{
        scanf("%f",&y);
        if(0>y||y>10){
            printf("nota invalida\n");
        }
    }while(0>y||y>10);
    media =(x+y)/2;
    printf("media = %.2f\n", media);
    return 0;
}