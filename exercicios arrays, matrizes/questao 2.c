/*
Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz[3][3], i, j;
	
	printf ("digite os valores da matriz: \n");
	
	for ( i = 0; i < 3; i++) {
		for( j = 0; j < 3; j++)
		   scanf ("%d", &matriz[i][j]);
	}
	
	printf ("\n\n");
	printf ("-------------------------\n");
	
	printf ("os elementos da matriz multiplicados por 2 sao: \n");
	printf ("-------------------------\n");
	
	for ( i = 0; i < 3; i++) {
		printf ("\n");
		   for( j = 0; j < 3; j++)
		      printf ("%d \t", 2 * matriz[i][j]);
	
	}	 
	

   return 0;	
}
