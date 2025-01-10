#include <stdio.h>
int main() {
    int x, y, z, total = 0;
    scanf("%d %d", &x,&y);
    if(x>y){
        z = x;
        x = y;
        y = z;
    }
    if(x%2==0){
        x--;
    }
    for(int i =x+2; i < y; i+=2){
        total +=i;
        }
    printf("%d\n", total);
    return 0;
}  