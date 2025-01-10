#include <stdio.h>

int main() {
int x,n,i,j=1,total=0,prim;
scanf("%d",&n);
while(j<=n){
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        if(x%i==0){
            prim+=1;
        }
    }
    if(prim==1||prim==2) printf("%d eh primo\n",x);
    else printf("%d nao eh primo\n",x);
    j++; 
    total=0;
    prim=0;
    }
    return 0;
}