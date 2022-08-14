#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, tamanho;
	char letra;
	
	tamanho = sizeof(numero);
	
	printf ("tamanho em bytes do inteiro: %d\n", tamanho);
	
	tamanho = sizeof(letra);
	
	printf ("tamanho em bytes da caractere: %d\n", tamanho);
	
	return 0;
}
