#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j, m, n;
	int **ponteiro;
	
	printf ("informe o numero de linhas:  ");
	scanf ("%d", &m);
	printf ("\n\n");
	
	printf ("informe o numero de colunas:  ");
	scanf ("%d", &n);
	printf ("\n\n");
	
	ponteiro = (int **) malloc ( m * sizeof(int*));
	
	for ( i = 0; i < m; i++) {
		
		ponteiro[i] = (int*) malloc( n * sizeof(int));
		
		for ( j = 0; j < n; j++) {
			printf ("informe um valor:  ");
			scanf ("%d", &ponteiro[i][j]);
		}
	}
	
	printf ("\n\n");
	
	for ( i = 0; i < m; i++) {
		printf ("\n");
			
		for ( j = 0; j < n; j++) {
			printf ("%d \t", ponteiro[i][j]);

		}
	}
	
	return 0;
}
