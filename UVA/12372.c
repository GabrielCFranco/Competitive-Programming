#include <stdio.h>
int main(){
	int t=0,l=0,w=0,h=0,i=1,aux=1;
	scanf("%d",&t);
	for(i = 0 ;i < t;i++){
		l=0;
		w=0;
		h=0;
		scanf("%d %d %d",&l,&w,&h);
		if(l > 20|| w > 20|| h > 20){
			printf("Case %d: bad\n", aux);	
		} 
		else{
			printf("Case %d: good\n", aux);	
		} 
		aux++;
	}
	return 0;
}