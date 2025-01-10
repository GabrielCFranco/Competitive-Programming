#include <stdio.h>
int main (){
    int x,y,i;
    long long int soma1=1, soma2=1, total=0;
    while(scanf("%d %d",&x,&y) != EOF) {
        soma1 = soma2 = 1;
        total = 0;
        int fac1[x],fac2[y];
        for(i=0;i<x;i++){
            fac1[i]=x-i;
        }
        for(i=0;i<y;i++){
            fac2[i]=y-i;
        }
        for(i=0;i<x;i++){
            soma1*=fac1[i];
        }
        for(i=0;i<y;i++){
            soma2*=fac2[i];
        }
        total=soma1+soma2;
        printf("%lld\n",total);
    }
}