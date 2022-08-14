//Escreva uma função recursiva em linguagem C para calcular o valor de x^n

#include <stdio.h>
#include <stdlib.h>

float potencia ( int x, int n) {
	
	if ( n > 1)
		return x * potencia ( x, n - 1);
	else
		return x;
}


int main () {
	
	int x, n;
	float resultado;
	
	printf ("informe um valor inteiro:  ");
	scanf ("%d", &x);
	printf ("\n");
	
	printf ("informe a potencia  ");
	scanf ("%d", &n);
	printf ("\n");
	
	resultado = potencia( x, n);
	
	printf ("\nresultado: %.2f", resultado);
	
	return 0;
}
