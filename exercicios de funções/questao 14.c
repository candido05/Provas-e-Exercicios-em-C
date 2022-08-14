/*
Fa�a um programa que verifique quantas vezes um n�mero � divis�vel por outro.
A fun��o deve receber dois par�metros, o dividendo e o divisor. Ao ler o divisor, �
importante verificar se ele � menor que o dividendo. Ao final imprima o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int divisao (int dividendo, int divisor) {
	
	int contador = 0;
	
	while (dividendo >= divisor ) {
		
		dividendo = dividendo / divisor  ;
		contador++;
	}
	
	return contador;
}

int main () {
	
	int Dividendo, Divisor, Divisao;
	
	printf ("digite o valor do Dividendo:  ");
	scanf ("%d", &Dividendo);
	printf ("\n");
	
	printf ("digite o valor do Divisor:  ");
	scanf ("%d", &Divisor);
	printf ("\n");
	
	printf ("\n-------------------------\n");
	
	if (Dividendo < Divisor) {
		printf ("\ndivisor maior do que dividendo.");
	
	} else {
	
		Divisao = divisao (Dividendo, Divisor);
		printf ("\nnumero de divisores: %d", Divisao);
		}
	
	return 0;
}
