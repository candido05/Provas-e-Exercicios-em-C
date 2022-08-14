/*
Fa�a um programa em C que calcule, por meio de uma fun��o recursiva, a �b
usando a adi��o, em que a e b s�o inteiros n�o-negativos.
*/

#include <stdio.h>
#include <stdlib.h>

float multiplicacao ( int a, int b) {
	if ( b > 0)
		return a + multiplicacao ( a, b -1);
	else
		return 0;
}

int main () {
	
	int A, B;
	float resultado;
	
	printf ("informe o valor de A:  ");
	scanf ("%d", &A);
	printf ("\n");
	
	printf ("informe o valor de B:  ");
	scanf ("%d", &B);
	printf ("\n");
	
	resultado = multiplicacao (A, B);
	
	printf ("\no resultado da multiplicacao por soma eh: %f", resultado);
	
	return 0;
}
