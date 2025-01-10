#include <stdio.h>
 
int main() {
int test,n,i,j;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&n);
        long long int fib[n];
        fib[0]=0;
        fib[1]=1;
        for(j=0;j<n;j++){
            fib[j+2]=fib[j+1]+fib[j];
        }
        printf("Fib(%d) = %lld\n",j,fib[n]);
    }
return 0;
}