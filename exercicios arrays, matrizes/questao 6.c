/*
Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2].
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz_A[2][2], matriz_B[2][2], matriz_soma[2][2], i, j;
	
	printf ("digite os valores da matriz A: \n");
	
	for ( i = 0; i < 2; i++) {
		for( j = 0; j < 2; j++) {
		   scanf ("%d", &matriz_A[i][j]);
	    }
    }
	printf ("\n-------------------------\n");
	
	for ( i = 0; i < 2; i++) {
		 printf ("\n");
		for( j = 0; j < 2; j++) {
		  printf ("%d \t", matriz_A[i][j]); 
	    }
    }

	printf ("\n\n");
	printf ("-------------------------\n");
	
	printf ("digite os valores da matriz B: \n");
	
	for ( i = 0; i < 2; i++) {
		for( j = 0; j < 2; j++) {
		   scanf ("%d", &matriz_B[i][j]);
	    }
    }
	
	printf ("\n-------------------------\n");
	
	for ( i = 0; i < 2; i++) {
		 printf ("\n");
		for( j = 0; j < 2; j++) {
		  printf ("%d \t", matriz_B[i][j]); 
	    }
    }
	
	printf ("\n\n");
	printf ("-------------------------\n");
	
	for ( i = 0; i < 2; i++) {
		for( j = 0; j < 2; j++) {
		   matriz_soma[i][j] = matriz_B[i][j] + matriz_A[i][j];
	    }
    }
	
	printf ("o valor da soma dos valores da matriz A e B sao: \n"); 
	printf ("\n\n");
	printf ("-------------------------\n");
	
	for ( i = 0; i < 2; i++) {
		 printf ("\n");
		for( j = 0; j < 2; j++) {
		  printf ("%d \t", matriz_soma[i][j]); 
	    }
    }
	
   return 0;	
}
