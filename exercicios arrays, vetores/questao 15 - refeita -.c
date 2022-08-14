
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor[10], numero, auxiliar, i;
	
	printf ("digite os numeros: \n");
	
	for ( i = 0; i < 10; i++) {
		
		scanf ("%d", &vetor[i]);
		
    }
	
	for (i = 0; i < 10; i++) {
		if ( vetor[i] == vetor[i] )
		auxiliar++;
	}
	
	printf ("\n            \n");
	printf ("a quantidade de numeros iguais eh: -- %d --", auxiliar);
		
	return 0;
}
