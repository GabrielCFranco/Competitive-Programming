#include <stdio.h>

int main() {
int x,y,i=0,total=0; 
scanf("%d",&x);
    do{
        scanf("%d",&y);
    }while(y<=x);
    do{
        total+=x;
        x++;
        i++;
    }while(total<=y);
    printf("%d\n", i);
    return 0;
}