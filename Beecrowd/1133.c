#include <stdio.h>
int main() {
int x, y, z;
scanf("%d %d", &x,&y);
    if(x>y){
        z = x;
        x = y;
        y = z;
    }
    for(int i=x;i<y;i++){
        if(i>2){
            if(i%5==2||i%5==3){
                //printf("DEBUG:%d\n",i%5);
                printf("%d\n",i);
            }
        }
    }
}