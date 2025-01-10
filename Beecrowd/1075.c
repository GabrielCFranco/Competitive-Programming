#include <stdio.h>
int main() {
    int p, i=0;
    scanf("%d",&p);
    for(i;i<10000;i++){
        if(i%p==2){
            printf("%d\n", i);
        }
    }
    return 0;
}