#include <stdio.h>

int main() {
int x,y,t;
float total;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            total=x/(float)y;
            printf("%.1f\n",total);
        }
    }
    return 0;
}