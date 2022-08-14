/*
Crie uma estrutura para representar as coordenadas de um ponto no plano 
(posi��es X e Y). Em seguida, declare e leia do teclado um ponto e exiba 
a dist�ncia dele at� a origem das coordenadas, isto �, posi��o (0, 0).
Para realizar o c�lculo, utilize a f�rmula a seguir:

Em que:
� d = dist�ncia entre os pontos A e B
� X = coordenada X em um ponto
� Y = coordenada Y em um ponto
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	
	float x; 
	float y;
	
};

int main () {
	
	struct ponto p;
	
	printf ("informe o ponto x: \n");
	scanf ("%f", &p.x);
	printf ("informe o ponto y: \n");
	scanf ("%f", &p.y);
	
	printf ("\n\n");
	printf ("a distancia do ponto de origem ( 0, 0): %2.f", sqrt ( pow (p.x - 0, 2) + pow( p.y - 0, 2)));
	
	return 0;
}
