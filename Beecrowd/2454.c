#include <stdio.h>
int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	if(a == 0){
		printf("C\n");
	}
	else if(a == 1 && b == 0){
		printf("B\n");
	}
	else if(a == 1 && b == 1){
		printf("A\n");
	}
	return 0;
}