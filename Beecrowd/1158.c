#include <stdio.h>

int main() {
int n,x,y,i,j=1,total=0;
scanf("%d",&n);
    while(j<=n){
        total=0;
        scanf("%d %d",&x,&y);
        if(x%2==0){
            x++;
        }
        for(i=1;i<=y;i++){
            total+=x;
            x+=2;
        }
        printf("%d\n",total);
        j++;
    }
    return 0;
}