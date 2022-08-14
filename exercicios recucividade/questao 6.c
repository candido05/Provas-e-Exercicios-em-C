/*
Escreva um programa recursivo em linguagem C para converter um n�mero da
sua forma decimal para a forma bin�ria. Dica: dividir o n�mero sucessivamente
por 2, sendo que o resto da i-�sima divis�o vai ser o d�gito i do n�mero bin�rio
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
