#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *ponteiro; 
	int vetor[10], i;
	
	//	ponteiro = malloc( 10 * 4);
	//  ponteiro = malloc ( 10 * sizeof(int));
	ponteiro = (int*) malloc ( 10 * sizeof(int));
	
	
	/*                   - isso daqui faz com que dê "memoria insufuciente".
	if ( ponteiro == NULL ) {
		
		printf ("erro: memoria insuficiente.\n");
		
	} else {
	*/	
		for ( i = 0; i < 10; i++) {
			
			printf ("informe um valor:  ");	
			scanf ("%d", &vetor[i]);
			printf ("\n");
		}
//	} 	
	
	printf ("\n\n");
	
	for ( i = 0; i < 10; i++) {
		ponteiro = &vetor[i];
		printf ("%d\n", *ponteiro);
	}
	return 0;
}
