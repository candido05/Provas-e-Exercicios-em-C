/*
. Faça um programa que leia os lados a, b e c de um paralelepípedo e imprima a
diagonal. Para fazer o cálculo, implemente uma função. Utilize a fórmula a seguir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float diagonal ( float a, float b, float c) {
	
	return sqrt( (a * a) + (b * b ) + (c * c) );
}

int main (){

	float lado_a, lado_b, lado_c, Diagonal;

	printf ("digite os valores doas 3 lados: \n");
	printf ("\n----------------------------\n");

	printf ("\nlado A:  ");
	scanf ("%f", &lado_a);
	printf ("\n");
	printf ("lado B:  ");
	scanf ("%f", &lado_b);
	printf ("\n");
	printf ("lado C:  ");
	scanf ("%f", &lado_c);
	printf ("\n");
	
	Diagonal = diagonal (lado_a, lado_b, lado_c);
	
	printf ("\n-----------------\n\n");
	printf ("o valor da diagonal foi: %2.f\n\n", Diagonal);

	return 0;
}
