/*
. Fa�a um programa que leia um valor inteiro N n�o negativo. Se o valor de N for
inv�lido, o usu�rio dever� digitar outro at� que ele seja v�lido (ou seja, positivo).
Em seguida, leia um vetor V contendo N posi��es de inteiros, em que cada valor
dever� ser maior ou igual a 2. Esse vetor dever� ser alocado dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, n, *vetor;
	
	do {
		
		printf ("informe um valor n inteiro:  ");
		scanf ("%d", &n);
		printf ("\n\n");
		
		if ( n <= 0) {
			printf ("valor invalido\n");
		}
		
	} while ( n <= 0);
	
	vetor = (int*) malloc( n * sizeof(int));
	
	for ( i = 0; i < n; i++) {
		
		do {
			printf ("informe um valor inteiro >= 2:  ");
			scanf ("%d", &vetor[i]);
			
				if ( vetor[i] < 2)
					printf ("valor invalido\n");
					
		} while ( vetor[i] < 2);	
	}
	
	for ( i = 0; i < n; i++)
		printf ("valor: %d\n", vetor[i]);
		
	free(vetor);	
	return 0;
}
