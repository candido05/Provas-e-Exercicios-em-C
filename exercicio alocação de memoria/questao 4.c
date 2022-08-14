/*
Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
alocados dinamicamente. O vetor deve ser preenchido com valores de 0 a N-1.
*/

#include <stdio.h>
#include <stdlib.h>

int aloca_vetor( int tamanho) {
	
	int i, *vetor;
	
	vetor = (int*) malloc( tamanho * sizeof(int));
	
	for ( i = 0; i < tamanho; i++){
		vetor[i] = i;
	}
	return vetor;
}

int main () {

	int i, n, *ponteiro_vetor;	
		
	printf ("informe um valor n:  ");
	scanf ("%d", &n);
	printf ("\n");	
		
	ponteiro_vetor = aloca_vetor(n);
	
	for ( i = 0; i < n; i++){	
	
		printf ("valor: %d \n", ponteiro_vetor[i]);
	}
		
	return 0;
}
