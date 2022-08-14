/*

 Faça um programa em C que leia 5 valores inteiros e armazene em um vetor. Após a
leitura o programa deve encontrar e imprimir o maior valor armazenado no vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, maior, lista[5];
	
	for ( i = 0; i < 5; i++) {
		printf ("informe um numero: \n");
		scanf ("%d", &lista[i]);
	}
	
	maior = lista [0];
	
	for (i = 1; i < 5; i++) {
		if ( maior < lista[i])
		maior = lista[i];
	}
	
	printf ("\n o maior numero foi %d", maior);

	return 0;
}
