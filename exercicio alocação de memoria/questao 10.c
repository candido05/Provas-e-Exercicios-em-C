/*
Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na
diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor
-1 nos elementos abaixo da diagonal principal. Veja a figura 29 para entender
melhor o preenchimento da matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j, **ponteiro_matriz;
	double  numero;
	
	printf ("informe um numero:  ");
	scanf ("%lf", &numero);
	printf ("\n");
	
	//alocando memoria
	ponteiro_matriz = (int*)malloc( numero * sizeof(int));
	
	for ( i = 0; i < numero; i++){
		
		ponteiro_matriz[i] = (int*)malloc( numero * sizeof(int));
		
			for ( j = 0; j < numero; j++) {
				
				if ( i == j) {
					//esta na diagonal principal
					ponteiro_matriz[i][j] = 0;
					 
				} else if ( i < j) {
						ponteiro_matriz[i][j] = 1;
					
					} 
				else {
						ponteiro_matriz[i][j] = -1;
					}
			}
	}
	
	for ( i = 0; i < numero; i++) {
		for ( j = 0; j < numero; j++) {
			if ( j < (numero - 1)) {
				printf ("%d \t", ponteiro_matriz[i][j]);
		} else {
		
				printf ("%d \n\n", ponteiro_matriz[i][j]);
			}
		}
	}
	
	//liberando a memoria
	for ( i = 0; i < numero; i++) {
		free(ponteiro_matriz[i]);
	}
	
	free(ponteiro_matriz);
	return 0;
}
