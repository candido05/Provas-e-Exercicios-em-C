#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *ponteiro_numero, numero;
	
	ponteiro_numero = &numero;
	
	*ponteiro_numero = 10;
	
	printf ("conteudo de ponteiro_numero: %d\n", ponteiro_numero);
	
	printf ("conteudo do apontamento de ponteiro_numero: %d\n", *ponteiro_numero);
	
	
	return 0;
}
