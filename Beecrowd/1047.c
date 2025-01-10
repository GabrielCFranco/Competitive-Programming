#include <stdio.h>
#include <math.h>
int main() {
int h1, m1, h2, m2, dia, hora;
scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	m1 += h1*60;
	m2 += h2*60;
	dia = m2 - m1;
		if(dia <= 0) dia += 1440;
	hora = dia /60;
	dia %= 60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora, dia);
	return 0;
}
