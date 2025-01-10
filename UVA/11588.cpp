#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
	int maiorby,menorby,teste,col,linha,i,j,k,maior=0,aux=0,letras[91];
	cin >> teste;
	for(i=0;i<teste;i++){
		for(j=65;j<=90;j++){
			letras[j] = 0;
		}
		maior=0;
		scanf("%d %d %d %d",&linha,&col,&maiorby,&menorby);
		char v[21][21];
		for(j=0;j<linha;j++){
			for(k=0;k<col;k++){	
				cin >> v[j][k];
				letras[v[j][k]]++;
			}
		}
		for(j=65;j<91;j++){
				if(maior<=letras[j]){
					if(maior==letras[j]){
						letras[aux]+=letras[j];
					}
					else{
					maior=letras[j];
					aux=j;
				}
			}
		}
		int tam=maiorby*letras[aux]+(linha*col-letras[aux])*menorby;
		printf("Case %d: %d\n",i+1,tam);
	}
}