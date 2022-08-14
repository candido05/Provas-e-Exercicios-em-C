/*
Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos
de uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada
e da saída.
*/

#include <stdio.h>
#include <stdlib.h>

int main () { 

   int matriz_A[3][5], somacoluna[5], i, j;
   
	for ( j = 0; j < 5; j++) 
	   somacoluna[j] = 0;

    printf ("digite os valores da matriz: \n");
	
	for ( i = 0; i < 3; i++) {
		for( j = 0; j < 5; j++) {
		   scanf ("%d", &matriz_A[i][j]);
	    }
    }
	
	printf ("\n\n");
	printf ("\n-------------------------\n");
	
    for ( i = 0; i < 3; i++) {
    	printf ("\n");
	for( j = 0; j < 5; j++) {
		printf ("%d \t", matriz_A[i][j]);	   
	    }
    }

    printf ("\n\n");
	printf ("\n-------------------------\n");
    
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 5; j++) {
			somacoluna[j] += matriz_A[i][j];
		}
	} 
 
    printf ("\n\n");
	printf ("\n-------------------------\n");
	printf ("\n\n");
	
    printf ("a soma dos elemtos das colunas da matriz sao: \n");

    for ( j = 0; j < 5; j++)
       printf (" -- %d -- \t", somacoluna[j]);

    printf ("\n\n");
    
   return 0;
}
