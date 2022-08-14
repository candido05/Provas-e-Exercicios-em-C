/*
Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, tamanho, *ponteiro_vetor;
	
	printf ("informe o tamanho desejado:  ");
	scanf ("%d", &tamanho);
	printf ("\n");
	
	//alocando memoria do tamanho requisitado:
	ponteiro_vetor= (int*) malloc( tamanho * sizeof(int));
	
	for ( i = 0; i < tamanho; i++) {
		
		printf ("informe o valor inteiro %d:  ", i + 1);
		scanf ("%d", &ponteiro_vetor[i]);
	}
	
	for ( i = 0; i < tamanho; i++) {
		
		printf ("\nvalor: %d \n", ponteiro_vetor[i]);	
	}
	
	free (ponteiro_vetor);
	
	return 0;
}
