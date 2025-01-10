#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    for(int i = 1; i <= 6; i++){
        if(x%2==0){
            x+=1;
            i--;
        }
        else{
            printf("%d\n",x);
            x+=2;
        }
    }
    return 0;
}