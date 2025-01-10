#include <stdio.h>
#include <string.h>
int main(){
	int t,i,j,tam;
	char frase[1000];
	scanf("%d",&t);
	gets(frase);
	for(i=1;i<=t;i++){
		int cliques=0;
		gets(frase);
		tam = strlen(frase);
		for(j=0;j<tam;j++){
			if(frase[j]==97||frase[j]==100||frase[j]==103||frase[j]==106||frase[j]==109||frase[j]==112||frase[j]==116||frase[j]==119||frase[j]==32) cliques++;
			else if(frase[j]==98||frase[j]==101||frase[j]==104||frase[j]==107||frase[j]==110||frase[j]==113||frase[j]==117||frase[j]==120)cliques+=2;
			else if(frase[j]==99||frase[j]==102||frase[j]==105||frase[j]==108||frase[j]==111||frase[j]==114||frase[j]==118||frase[j]==121)cliques+=3;
			else if(frase[j]==115||frase[j]==122)cliques+=4;	
		}
		printf("Case #%d: %d\n",i,cliques);
	}
	return 0;
}