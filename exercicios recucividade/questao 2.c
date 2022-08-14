/*
Crie uma função recursiva que receba um número inteiro positivo N e calcule o
somatório dos números de 1 a N.
*/

#include <stdio.h>
#include <stdlib.h>

int soma ( int k) {
	
	if ( k > 0) 
		return k + soma ( k -1);
	else
		return k;
}

int main () {
	
	int numero, resultado;
	
	printf ("digite um numero inteiro positivo:  ");
	scanf ("%d", &numero);
	
	resultado = soma(numero);
	
	printf ("\nsoma de 1 a %d: -- %d -- ", numero, resultado);
	
	return 0;
}
