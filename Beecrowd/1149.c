#include <stdio.h>

int main() {
    int x,y,total=0;
    scanf("%d",&x);
    do{
        scanf("%d",&y);
    }while(y<=0);
    for(int i=0;i<y;i++){
        total=total+x+i;
    }
    printf("%d\n",total);
    return 0;
}