/*
. Escreva uma função que receba um valor inteiro positivo N por parâmetro e
retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for
negativo ou igual a zero, um ponteiro nulo deverá ser retornado.
*/

#include <stdio.h>
#include <stdlib.h>

int aloca_vetor ( int tamanho) {
	
	int i, *vetor;
	
	if ( tamanho > 0) {
		vetor = ( int*) malloc( tamanho * sizeof(int));
		return vetor;
	} else
		return NULL;
		
}

int main () {
	
	int i, n, *ponteiro_vetor;
	
	printf ("informe um valor n:  ");
	scanf ("%d", &n);
	printf ("\n");
	
	ponteiro_vetor = aloca_vetor(n);
	
	if ( ponteiro_vetor != NULL ){
		
		printf ("alocado corretamente\n");
		free(ponteiro_vetor);
	} else {
		printf ("erro de alocacao\n");
	}
	
	return 0;
}
