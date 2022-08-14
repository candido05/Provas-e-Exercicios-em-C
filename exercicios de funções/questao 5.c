/*
Faça um programa que verifique se um número é primo por meio de um função.
Ao final imprima o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int numero_primo ( int n) {
	
	int i, auxiliar = 0;
	
	for ( i = 1; i <= n; i++) 
		if ( n % i == 0)
			auxiliar++;
			
	return auxiliar;		
	
}

int main () {
	
	int numero, primo;
	
	printf ("digite o numero: ");
	scanf ("%d", &numero);
	printf ("\n\n");
	
	primo = numero_primo(numero);
	
	if ( primo == 2)
		printf ("numero primo");
	else
		printf ("numero nao eh primo.");
		
	return 0;
}
