#include <stdio.h>

int main() {
    float n1,n2,n3,n4,n5,n6;
    scanf("%f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6);
    int i = 0;
    if(n1 > 0){
        i++;
    }
    if(n2 > 0){
        i++;
    }
    if(n3 > 0){
        i++;
    }
    if(n4 > 0){
        i++;
    }
    if(n5 > 0){
    i++;
    }
    if(n6 > 0){
        i++;
    }
    printf("%d valores positivos\n", i);
    return 0;
}