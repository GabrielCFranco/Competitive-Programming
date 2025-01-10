#include<stdio.h>
int main(){
    int N[1000]={0},i,lim;
    scanf("%d",&lim);
    for(i=0;i<1000;i++){
        if(N[i]==lim) N[i]-=lim;
        printf("N[%d] = %d\n",i,N[i]);
        N[i+1]=N[i+1]+N[i]+1;
    }
    return 0;
}