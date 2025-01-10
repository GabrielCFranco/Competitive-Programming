#include <stdio.h>

int main() {
int c1,p1,c2,p2;
scanf("%d %d %d %d",&c1,&p1,&c2,&p2);
	if(c1*p1==c2*p2){
	    printf("0\n");
	}
	else if(c1*p1<c2*p2){
	    printf("1\n");
	}
	else{
	    printf("-1\n");
	}
    return 0;
}