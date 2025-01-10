#include <stdio.h>
int main() {
int n, i=1;
    do{
        scanf("%d",&n);
        for(i;i<n;i++){
            printf("%d ",i);
        }
        if(n==0){
                break;
        }
        else{
        printf("%d\n", i);
        }
        i=1;
    }while(n!=0);
    return 0;
}