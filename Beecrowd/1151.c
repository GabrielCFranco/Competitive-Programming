#include <stdio.h>
int main(){	
	int x=-1,y=1,n,fib=0,i=1;
	scanf("%d",&n);
	for(i;i<n;i++){
		fib=x+y;
		printf("%d ",fib);
		x=y;
		y=fib;
	}
	fib=x+y;
	printf("%d\n",fib);

	return 0;
}