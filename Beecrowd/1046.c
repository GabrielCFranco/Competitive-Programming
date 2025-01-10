#include <stdio.h>
#include <math.h>
int main() {
    int h1, h2;
    scanf("%d %d", &h1, &h2);
    if(h2 > h1){
    	h1 -= h2;
	    printf("O JOGO DUROU %d HORA(S)\n", abs(h1));
	}
	else if(h1 >= h2){
		h2 += 24;
		h2 -= h1;	
		printf("O JOGO DUROU %d HORA(S)\n", h2);
	}
    return 0;
}