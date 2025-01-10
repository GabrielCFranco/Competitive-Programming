#include <stdio.h>
#include <math.h>
int main(){
	int a=1,b=1,c=1,d=1;
	while(a != 0 || b != 0 || c != 0 || d != 0){
		//primeira
		int total=1080;
		scanf ("%d %d %d %d",&a,&b,&c,&d);
		//segunda
		if(a>b){
			total+=(a-b)*9;
		}
		else{
			total+=360-(abs(b-a))*9;
		}
		//quarta
		if(b<c){
			total+=(c-b)*9;
		}
		else{
			total+=360-(abs(c-b))*9;
		}
		//quinta
		if(c>d){
			total+=(c-d)*9;
		}
		else{
			total+=360-(abs(d-c))*9;
		}
		if(a != 0 || b != 0 || c != 0 || d != 0){
			printf("%d\n",total);
		}
	}
}