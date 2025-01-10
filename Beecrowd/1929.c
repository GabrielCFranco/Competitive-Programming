#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a+b>c&&a+c>b&&b+c>a&&c>fabs(a-b)&&b>fabs(a-c)&&a>fabs(b-c)){
		printf("S\n");
	}
	else if(a+c>d&&a+d>c&&c+d>a&&d>fabs(a-c)&&c>fabs(a-d)&&a>fabs(c-d)){
		printf("S\n");
	}
	else if(b+c>d&&b+d>c&&c+d>b&&b>fabs(c-d)&&c>fabs(b-d)&&d>fabs(b-c)){
		printf("S\n");
	}
	else if(a+b>d&&a+d>b&&b+d>a&&a>fabs(b-d)&&b>fabs(a-d)&&d>fabs(a-b)){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	return 0;
}