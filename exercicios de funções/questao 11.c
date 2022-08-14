/*
Faça um programa que leia a diagonal maior e a diagonal menor de um losango e
imprima a área. Para fazer o cálculo, implemente uma função. Utilize a fórmula a
seguir
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float area ( float diagonal_menor, float diagonal_maior ) {
	
	return ( diagonal_menor * diagonal_maior) / 2;
}

int main () {
	
	float diagonal_1, diagonal_2, Area;
	
	printf ("digite os valores das diogonais: \n");
	printf ("\n");
	
	printf ("diagonal maior:  ");
	scanf ("%f", &diagonal_1);
	printf ("\n");
	
	printf ("diagonal menor:  ");
	scanf ("%f", &diagonal_2);
	printf ("\n");
	
	Area = area (diagonal_1, diagonal_2);
	
	printf ("\n----------------------\n");
	printf ("o valor da aera eh: %2.f\n\n", Area);
	
	return 0;
}
