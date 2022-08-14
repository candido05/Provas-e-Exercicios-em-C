/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles, considere a mesma fórmula do exercício anterior
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	
	int x, y;
	
};

int main () {
	
	struct ponto pA, pB;
	
	printf ("informe o ponto X na posicao A \n");
	scanf ("%d", &pA.x);
	printf ("\n");
	printf ("informe o ponto Y na posicao A \n");
	scanf ("%d", &pA.y);
	
	printf ("\n------------------------------------\n");
	
	
	printf ("informe o ponto X na posicao B \n");
	scanf ("%d", &pB.x);
	printf ("\n");
	printf ("informe o ponto Y na posicao B \n");
	scanf ("%d", &pB.y);
	
	printf ("\n--------- | ---------\n");
	
	printf ("a distancia entre os pontos A e B eh: -- %2.f -- ", sqrt( pow(pB.x - pA.x,2) + pow(pB.y - pA.y,2)));
	return 0;
}
