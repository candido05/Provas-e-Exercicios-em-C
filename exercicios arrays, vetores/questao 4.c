/*

Fa�a um programa que armazene 8 n�meros em um vetor e imprima todos os
n�meros. Ao final, imprima o total de n�meros m�ltiplos de seis.

*/

#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int vetor[8], i, contador;
	
	printf ("digite os 8 valores do vetor: \n");
	for ( i = 0; i < 8; i++)
	    scanf ("%d", &vetor[i]);
	
	for ( i = 0; i < 8; i++)
	   if ((vetor[i] % 6 ) == 0)
	    contador++;
	
	for ( i = 0; i < 8; i++)
	  printf ("\nnumero: %d\n", vetor[i]);
	
	printf ("       \n");
	printf ("-------------------------------------\n");
	printf ("total de numeros multiplos de 6: %d", contador);  
	
	
	return 0;
}
