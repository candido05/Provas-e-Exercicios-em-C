/*
Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz[3][3], i = 0, j = 0;
	
	printf ("digite os valores da matriz: \n");
	for ( i = 0; i < 3; i++) 
	   for ( j = 0; j < 3; j++)
	      scanf ("%d", &matriz[i][j]);
	
	printf ("\n\n");
	printf ("-------------------------\n");
	
	printf ("os elementos da matriz sao: \n");
	printf ("-------------------------\n");
	
	for ( i = 0; i < 3; i++) {
	
	  printf ("\n");
	   for ( j = 0; j < 3; j++)
	     printf ("%d \t", matriz[i][j]);

	}
	
	return 0;
}
