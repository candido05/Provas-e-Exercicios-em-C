/*
. Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho
N cada. A função deve retornar o ponteiro para um vetor C de tamanho N alocado
dinamicamente, em que C[i] = A[i] + B[i].
*/

#include <stdio.h>
#include <stdlib.h>

int *soma ( int *vetor_1, int *vetor_2, int tamanho) {
	
	int i;
	//alocando a memoria dinamica
	int *vetor_3 = (int*) malloc(tamanho * sizeof(int));
	
	//soamndo os vetores
	for ( i = 0; i < tamanho; i++) {
		
		vetor_3[i] = vetor_1[i] + vetor_2[i];
	} 
	
		return vetor_3;
}

int main () {
	
	int tamanho, i, *ponteiro_vetor_1, *ponteiro_vetor_2, *ponteiro_vetor_3;
	
	printf ("informe o tamanho desejado:  ");
	scanf ("%d", &tamanho);
	printf ("\n");
	
	//alocando a mamoria
	ponteiro_vetor_1 = (int*)malloc(tamanho * sizeof(int));
	ponteiro_vetor_2 = (int*)malloc(tamanho * sizeof(int));
	
	//lendo os dados
	for ( i = 0; i < tamanho; i++){
		
		printf ("informe o numero %d do vetor 1:  ", i + 1);
		scanf ("%d", &ponteiro_vetor_1[i]);
	}
	
	printf ("\n\n");
	
	for ( i = 0; i < tamanho; i++){
		
		printf ("informe o numero %d do vetor 2:  ", i + 1);
		scanf ("%d", &ponteiro_vetor_2[i]);
	}
	
	//aciona a funçao
	ponteiro_vetor_3 = soma( ponteiro_vetor_1, ponteiro_vetor_2, tamanho);
	
	printf ("\n\n");
	
	for ( i = 0; i < tamanho; i++) 
		printf ("numero  %d  \n", ponteiro_vetor_3[i]);
	
	//liberando a memoria	
	free( ponteiro_vetor_1);
	free( ponteiro_vetor_2);
	free( ponteiro_vetor_3);
		
	return 0;
}
