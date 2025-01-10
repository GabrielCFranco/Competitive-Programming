#include <stdio.h>
int main(){
	int n,area,ani,ver,i,j;
	scanf("%d",&n);
		for(i=0;i<n;i++){
			int total=0,t=0;
			scanf("%d",&t);
			for(j=0;j<t;j++){
				area = 0;
				ani = 0;
				ver = 0;
				scanf("%d %d %d",&area,&ani,&ver);
				total+=area*ver;
		}
		printf("%d\n",total);
	}
	return 0;
}   