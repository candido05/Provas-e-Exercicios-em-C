/*
Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz[5][5], i, j;
	
	printf ("digite os valores da matriz: \n");
	
	for ( i = 0; i < 5; i++) {
		for( j = 0; j < 5; j++) {
		   scanf ("%d", &matriz[i][j]);
	    }
    }
	
	printf ("\n\n");
	printf ("-------------------------\n");
	
	printf ("os elementos da matriz das colunas + linhas iguais a valores pares : \n");
	printf ("-------------------------\n");
	
	 for ( i = 0; i < 5; i++) {
		printf ("\n");
		    for( j = 0; j < 5; j++) {
		       if (( (j + i ) % 2) == 0) {
		        printf ("%d \t", matriz[i][j]);
		    }
    	}
   } 

    return 0;	
}
