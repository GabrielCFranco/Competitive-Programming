#include <stdio.h>

int main() {
    int t,x, i =1;
    scanf("%d",&t);
    for(i;i<=t;i++){
        scanf("%d", &x);
        if(x%2==0&&x>0){
            printf("EVEN POSITIVE\n");
        }
        else if(x%2==1&&x>0){
            printf("ODD POSITIVE\n");
        }
        else if(x%2==0&&x<0){
            printf("EVEN NEGATIVE\n");
        }
        else if(x==0){
            printf("NULL\n");
        }
        else{   
            printf("ODD NEGATIVE\n");
        }
        
    }
    return 0;
}