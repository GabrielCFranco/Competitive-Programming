#include <stdio.h>
int main(){
	int t,est,vec[99];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int maior=0;
		scanf("%d",&est);
		for(int j=0;j<est;j++){
			scanf("%d",&vec[j]); 
		}
		for(int j=0;j<est;j++){
			if(maior<vec[j]) maior = vec[j];
		}
		printf("Case %d: %d\n",i+1,maior);
	}
}