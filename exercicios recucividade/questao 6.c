/*
Escreva um programa recursivo em linguagem C para converter um número da
sua forma decimal para a forma binária. Dica: dividir o número sucessivamente
por 2, sendo que o resto da i-ésima divisão vai ser o dígito i do número binário
(da direita para a esquerda).
*/

#include <stdio.h>
#include <stdlib.h>

int binario ( int k ) {
	
	if ( k < 2)
		return k;
	return ( 10 * binario ( k / 2)) + k % 2;	
}

int main () {
	
	int numero, resultado;
	
	printf ("digite o numero:  ");
	scanf ("%d", &numero);
	
	resultado = binario(numero);
	
	printf ("numero binario: %d", resultado);
	
	return 0;
}
