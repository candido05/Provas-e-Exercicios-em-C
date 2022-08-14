/*
Construa um programa para ler valores para duas matrizes do tipo inteiro de
ordem 3. Gerar e imprimir a matriz diferença.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
		int matriz_A[3][3], matriz_B[3][3], matriz_diferenca[3][3], i, j;
	
	printf ("digite os valores da matriz A: \n");
	
	for ( i = 0; i < 3; i++) {
		for( j = 0; j < 3; j++) {
		   scanf ("%d", &matriz_A[i][j]);
	    }
    }
	printf ("\n-------------------------\n");
	
	for ( i = 0; i < 3; i++) {
		 printf ("\n");
		for( j = 0; j < 3; j++) {
		  printf ("%d \t", matriz_A[i][j]); 
	    }
    }

	printf ("\n\n");
	printf ("-------------------------\n");
	
	printf ("digite o valor da matriz B: \n");
	
	for ( i = 0; i < 3; i++) {
		for( j = 0; j < 3; j++) {
		   scanf ("%d", &matriz_B[i][j]);
	    }
    }
	
	printf ("\n-------------------------\n");
	
	for ( i = 0; i < 3; i++) {
		 printf ("\n");
		for( j = 0; j < 3; j++) {
		  printf ("%d \t", matriz_B[i][j]); 
	    }
    }
	
	printf ("\n\n");
	printf ("-------------------------\n");
	
	for ( i = 0; i < 3; i++) {
		for( j = 0; j < 3; j++) {
		   matriz_diferenca[i][j] = matriz_B[i][j] - matriz_A[i][j];
	    }
    }
	
	printf ("o valor da diferenca dos valores da matriz A e B sao: \n"); 
	printf ("\n\n");
	printf ("-------------------------\n");
	
	for ( i = 0; i < 3; i++) {
		 printf ("\n");
		for( j = 0; j < 3; j++) {
		  printf ("%d \t", matriz_diferenca[i][j]); 
	    }
    }	
	
    return 0;	
}
