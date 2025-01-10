#include <stdio.h>
int main() {
int x=1,y=1,z,i;
	do{
	    scanf("%d %d",&x,&y);
	    if(x>0&&y>0){
		    if(x>y){
		            z=y;
		            y=x;
		            x=z;
		    }
		        z=0;
		    for(i=x;i<=y;i++){
		        printf("%d ",x);
		        z+=x;
		        x++;
		    }
		printf("Sum=%d\n",z);
	    }   
    }while(x>0&&y>0);
	return 0;
}