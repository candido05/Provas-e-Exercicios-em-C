#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que leia dois conjuntos de números inteiros, tendo
//cada um 10 elementos. Ao final o programa deve listar os elementos comuns 
//aos conjuntos.


int main () {
	
	int vetor [10], w [10], i, j, auxiliar = 0;
	
	printf ("digite os 10 valores do vetor: \n");
	
	for ( i = 0; i < 10; i++) {
		scanf ("%d", &vetor[i]);
	}
	
	for ( i = 0; i < 10; i++) {
		auxiliar = 1;
		if ( vetor [i] == 1) {
			w[i] = 1;
		} else {
			for (j = 1; j < vetor [i]; j++){
				auxiliar *= j + 1;
			}
			
			w[i] = auxiliar;
		}
	}
	
	printf ("numero \t fatorial: \n");
	for (i = 0; i < 10; i++)
	    printf ("%d \t %d \n", vetor[i], w[i]);

	return 0;
}
