/*
Construa um programa que armazene dados em uma matriz de ordem 4 
e imprima: Todos os elementos com números ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz[4][4], i, j;
	
	printf ("digite os valores da matriz: \n");
	
	for ( i = 0; i < 4; i++) {
		for( j = 0; j < 4; j++) {
		   scanf ("%d", &matriz[i][j]);
	    }
    }
	
	printf ("\n\n");
	printf ("-------------------------\n");
	
	printf ("os elementos da matriz iguais a valores impares : \n");
	printf ("-------------------------\n");
	
	 for ( i = 0; i < 4; i++) {
		printf ("\n");
		    for( j = 0; j < 4; j++) {
		       if (( ( matriz[i][j] ) % 2) != 0) {
		        printf ("%d \t", matriz[i][j]);
		    }
    	}
   } 

    return 0;	
}
