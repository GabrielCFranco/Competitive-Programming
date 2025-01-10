#include <stdio.h>

int main() {
int x,n,i,j=1,total=0;
scanf("%d",&n);
while(j<=n){
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        if(x%i==0){
            total+=i;
        }
    }
    total-=x;
    if(total==x) printf("%d eh perfeito\n",x);
    else printf("%d nao eh perfeito\n",x);
    j++; 
    total=0;
    }
    return 0;
}