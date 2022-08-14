#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *ponteiro, i;
	
	ponteiro = ( int*) malloc ( 10 * sizeof (int));
	
	if ( ponteiro == NULL ) {
		
		printf ("erro: memoria insulficiente.");	
		
	} else {
		
		for ( i = 0; i < 10; i++) {
			printf ("informe um valor:  ");
			scanf ("%d", &ponteiro[i]);
		}	
		
		printf ("\n\n");
		
		for ( i = 0; i < 10; i++) {
			
			printf ("valor na posicao %d: %d\n", i + 1, ponteiro[i]);
		}
		
	}
	
	free(ponteiro);

	return 0;
}
