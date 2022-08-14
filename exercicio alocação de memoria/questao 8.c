/*
Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho
N cada. A função deve retornar o ponteiro para um vetor C de tamanho N × 2
alocado dinamicamente, em que |C| = |A|+|B|, ou seja, a união dos dois conjuntos
irão formar o conjunto C, ou vetor C.
*/

#include <stdio.h>
#include <stdlib.h>

int *junta ( int *vetor1, int *vetor2, int tamanho){
	
	int i;
	
	//alocando a memoria
	int *vetor3 = (int*)malloc (tamanho*2 * sizeof(int));
	
	//juntando os vetores
	for ( i = 0; i< tamanho; i++){
		
		vetor3[i] = vetor1[i];
	}
	
	for ( i = tamanho; i < tamanho*2; i++){
		
		vetor3[i] = vetor2[i - tamanho];
	}
	return vetor3;
}

int main () {
	
	int tamanho, i, *ponteiro_vetor_1, *ponteiro_vetor_2, *ponteiro_vetor_3;
	
	printf ("informe o tamanho desejado:  ");
	scanf ("%d", &tamanho);
	printf ("\n");
	
	//alocando a memoria
	ponteiro_vetor_1 = (int*)malloc( tamanho * sizeof(int));
	ponteiro_vetor_2 = (int*)malloc( tamanho * sizeof(int));
	
	//lendos os dados	
	for ( i = 0; i < tamanho; i++){
		
		printf ("informe o numero %d do vetor 1:  ", i + 1);
		scanf ("%d", &ponteiro_vetor_1[i]);
	}
	
	printf ("\n\n");
	
	for ( i = 0; i < tamanho; i++){
		
		printf ("informe o numero %d do vetor 2:  ", i + 1);
		scanf ("%d", &ponteiro_vetor_2[i]);
		printf ("\n");
	}
	
	ponteiro_vetor_3 = junta( ponteiro_vetor_1, ponteiro_vetor_2, tamanho);
	
	for ( i = 0; i < tamanho * 2; i++){
		
		printf ("numero: %d\n", ponteiro_vetor_3[i]);
	}
	
	//liberando a memoria
	free (ponteiro_vetor_1);
	free (ponteiro_vetor_2);
	free (ponteiro_vetor_3);
	
	return 0;
}
