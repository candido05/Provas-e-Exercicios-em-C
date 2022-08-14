/*
Faça um programa que calcule e imprima o fatorial de um número, usando uma
função que receba um valor e retorne o fatorial desse valor
*/

#include <stdio.h>
#include <stdlib.h>

float calculo_fatorial ( int n) {
	
	int fatorial = 1, i;
	
	for ( i = 2; i <= n; i++) 
	  fatorial *= i;
	
	return fatorial;
}

int main () {
	
	int numero, fatorial = 0;
	
	printf ("digite o numero: ");
	scanf ("%d", &numero);
	
	fatorial = calculo_fatorial(numero);
	
	printf ("\n------------------\n");
	printf ("o valor fatorado eh: %d", fatorial);
	
	
	return 0;
}
