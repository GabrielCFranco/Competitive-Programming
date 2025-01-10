#include <stdio.h>
int main(){
    int x,i=1;
    scanf("%d", &x);
    for(i;i<=10;i++){
        printf("%d x %d = %d\n",i,x,x*i);
    }	
	return 0;
}