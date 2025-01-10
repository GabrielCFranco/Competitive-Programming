#include <stdio.h>
int main() {
    int x, y, z, total=0;
    scanf("%d %d", &x,&y);
    if(x>y){
        z = x;
        x = y;
        y = z;
    }
    for(int i=x;i<=y;i++){
        if(i%13!=0){
            total+=i;
        }
    }
    printf("%d\n",total);
}