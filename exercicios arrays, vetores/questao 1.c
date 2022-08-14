/*

Faça um programa em C que armazene 15 números inteiros em um vetor e depois
permita que o usuário digite um número inteiro para ser buscado no vetor, se
for encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Nao encontrado!"

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor[15], numero, i;
	
	printf ("digite os 15 valores do vetor: \n");
	for ( i = 0; i < 15; i++) {
    	scanf ("%d", &vetor[i]);
    }
	
	printf ("digite um numero para procurar no vetor; \n");
	scanf ("%d", &numero);
	
	for ( i = 0; i < 15; i++) {
		if (vetor[i] == numero) {
			printf ("numero - %d - encontrado na posicao - %d -\n",vetor[i], i + 1);
			break;
		} 
	}
	
     if (vetor[i] != numero) {
      printf ("numero nao encontrado");
    }
    
	return 0;
}
