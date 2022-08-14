/*
A sequência de Fibonacci é a sequência de inteiros: 0,1,1,2,3,5,8,13,21,34,....
Implemente uma função recursiva que calcule e imprima todos os elementos
da série Fibonacci de 0 até n. Em que, n deve ser informado pelo usuário do
programa.
*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci ( int numeros ) {
	
	if ( numeros == 1 || numeros == 2 )
		return 1;
	else 
		return fibonacci (numeros - 1) + fibonacci (numeros - 2);
}

int main () {
	
	int n, i;
	
	printf ("digite a quantidade de termos da sequencia da fibonacci:  ");
	scanf ("%d", &n);
	
	printf ("\na seuqencia eh 0 ");
	for ( i = 0; i < n ;i++) 
	printf ("%d ", fibonacci(i + 1));
	
	
	return 0;
}
