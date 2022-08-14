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
	}
	
	//aumentando a memoria
	ponteiro = realloc ( ponteiro, 20 * sizeof(int));
	printf ("\n\n");
	
	if ( ponteiro == NULL ) {
		
		printf ("erro: memoria insulficiente.");	
		
	} else {
		
		for ( i = 0; i < 20; i++) {
		
			printf ("valor na posicao %d eh: %d\n\n", i + 1, ponteiro[i]);
		}	
	}
	
	return 0;
}
