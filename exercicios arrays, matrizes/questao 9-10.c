/*
Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMALINHA, em que cada elemento é a soma dos elementos
de uma linha da matriz A. Faça o trecho que gera a matriz separado da entrada e
da saída.
*/


#include <stdio.h>
#include <stdlib.h>

int main () { 

   int matriz_A[3][5], somalinha[3], i, j;
   
	for ( i = 0; i < 3; i++) 
	   somalinha[i] = 0;

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
			somalinha[i] += matriz_A[i][j];
		}
	} 
 
    printf ("\n\n");
	printf ("\n-------------------------\n");
	printf ("\n\n");
	
    printf ("a soma dos elemtos das linhas da matriz sao: \n");

    for ( i = 0; i < 3; i++)
       printf (" -- %d -- \t", somalinha[i]);

    printf ("\n\n");
    
   return 0;
}
