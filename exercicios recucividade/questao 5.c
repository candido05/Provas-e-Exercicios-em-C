/*
Escreva uma fun��o recursiva em C para calcular o m�ximo divisor comum de
dois n�meros, mdc(x, y).
*/

#include <stdio.h>
#include <stdlib.h>

int mdc ( int m, int n) {
	if ( n == 0)
		return m;
	return mdc ( n, m % n);	
}

int main () {
	
	int m, n, resultado;
	
	printf ("para calcular o mdc informe: \n\n");
	printf ("M:  ");
	scanf ("%d", &m);
	printf ("\n");
	printf ("N:  ");
	scanf ("%d", &n);	
	printf ("\n");
	
	resultado = mdc(m, n);
	printf ("MDC: %d \n", resultado);
	
	return 0;
}
