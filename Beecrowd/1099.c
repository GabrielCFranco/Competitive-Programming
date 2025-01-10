#include <stdio.h>
int main() {
int x,y,z,n,i=1,total=0;
scanf("%d",&n);
	for(i;i<=n;i++){
	scanf("%d %d",&x,&y);
	    if(x>y){
	        z=y;
	        y=x;
	        x=z;
	    }
	    x++;
	    for(x;x<y;x++){
	        if(x%2==1){
	          total+=x;
	        }
	    }
	    printf("%d\n",total);
	    total = 0;
	}
    return 0;
}