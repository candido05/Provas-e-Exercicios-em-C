/*
Fa�a um programa que leia os catetos (dois catetos) de um tri�ngulo ret�ngulo e
imprima a hipotenusa. Para fazer o c�lculo, implemente uma fun��o. Utilize a
f�rmula a seguir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa (float diagonal_maior, float diagonal_menor) {
	
	return sqrt( ( diagonal_maior * diagonal_maior ) + ( diagonal_menor * diagonal_menor) );
 }
 
 int main () {
 	
 	float diagonal_1, diagonal_2, Hipotenusa;
	
	printf ("digite os valores das diogonais: \n");
	printf ("\n");
	
	printf ("diagonal maior:  ");
	scanf ("%f", &diagonal_1);
	printf ("\n");
	
	printf ("diagonal menor:  ");
	scanf ("%f", &diagonal_2);
	printf ("\n");
	
	Hipotenusa = hipotenusa (diagonal_1, diagonal_2);
	
	printf ("\n----------------------\n");
	printf ("o valor da hipotenusa eh: %2.f\n\n", Hipotenusa); 	
 	
 	return 0;
 }
