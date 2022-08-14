#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *ponteiro_numero;
	int numero_1, numero_2;
	
	ponteiro_numero = &numero_1;
	*ponteiro_numero = 10;
	
	numero_2 = 20;
	numero_2 += *ponteiro_numero;
	
	printf ("conteudo de numero_1: %d\n", numero_1);
	printf ("enedereco de numero_1: %d\n", &numero_1);
	printf ("\n");
	
	printf ("conteudo de numero_2: %d\n", numero_2);
	printf ("enedereco de numero_2: %d\n", &numero_2);
	printf ("\n");
	
	printf ("\n--------------------------------------\n");
	
	printf ("conteudo de ponteiro_numero: %d\n", ponteiro_numero);
	printf ("conteudo do apontamento de ponteiro_numero: %d\n", *ponteiro_numero);
	printf ("endereco de ponteiro_numero: %d\n", &ponteiro_numero);
	
	return 0;
}
