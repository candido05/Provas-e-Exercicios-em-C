/*
  Faça um programa em C que armazene 15 números inteiros em um vetor NUM e
  imprima uma listagem dos números lidos
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, numero[15];
	
	for ( i = 0; i< 15; i++) {
		printf ("informe um numero \n");
		scanf ("%d", &numero[i]);
	}
	
	for ( i = 0; i < 15; i++ ){
		printf ("numero: %d \n", numero[i]);
	}
	
	return 0;
}
