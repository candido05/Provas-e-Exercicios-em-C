/*
. Fa�a um programa que leia o lado de um quadrado e imprima o per�metro, a
�rea e a diagonal. Para fazer o c�lculo, implemente tr�s fun��es, cada uma deve
realizar um c�lculo especifico conforme solicitado. Utilize as f�rmulas a seguir
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetro ( int lado ) {
	
	return lado * 4;
}

float area ( int lado ) {
	
	return lado * lado;
}

float diagonal ( int lado ) {
	
	return lado * sqrt(2);
}

int main (){
	
	float lado, Area, Perimetro, Diagonal;
	
	printf ("digite o valor do lado:  ");
	scanf ("%f", &lado);
	printf ("\n\n");
	
	Area = area(lado);
	Perimetro = perimetro(lado);
	Diagonal = diagonal(lado);
	
	printf ("o valor da area eh: %2.f \n", Area);
	printf ("o valor do perimetro eh: %2.f \n", Perimetro);
	printf ("o valor da diagonal eh: %2.f \n", Diagonal);
	
	return 0;
}
