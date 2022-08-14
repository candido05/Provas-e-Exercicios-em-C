/*
Cria uma estrutura chamada ret�ngulo. Essa estrutura dever� conter o ponto
superior esquerdo e o ponto inferior direito do ret�ngulo. Cada ponto � definido
por uma estrutura Ponto, a qual cont�m as posi��es X e Y. Fa�a um programa
que declare e leia uma estrutura ret�ngulo e exiba a �rea e o comprimento da
diagonal e o per�metro desse ret�ngulo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	
	int x, y;
	
};

int main () {
	
	struct ponto pA, pB;
	float altura, base, diagonal, area, perimetro;
	
	printf ("retantugo X: (ponto superior direito): \n");
	scanf ("%d", &pA.x);
	printf ("\n");
	printf ("retantugo Y: (ponto inferior direito): \n");
	scanf ("%d", &pA.y);
	printf ("\n");
	printf ("retantugo X: (ponto superior esuqerdo): \n");
	scanf ("%d", &pB.x);
	printf ("\n");
	printf ("retantugo Y: (ponto inferior esquerdo): \n");
	scanf ("%d", &pB.y);
	printf ("\n");
	
	printf ("\n---------------------------------------------\n");
	
	altura = sqrt(pow(pA.x - pA.x, 2) + pow(pA.y - pB.y, 2));
	base = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pB.y, 2));
	area = altura * base;
	diagonal =  sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));
	perimetro = (altura + base) * 2;
	
	printf ("comprimento da diagonal de: %2.f unidades \n", diagonal);
	printf ("area: %2.f unidades \n", area);
	printf ("perimetro: %2.f unidades", perimetro);
	
	return 0;
}
