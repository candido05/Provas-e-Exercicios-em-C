/*
Fa�a um programa que leia e armazene v�rios n�meros, at� digitar o n�mero
0. Imprimir quantos n�meros iguais ao �ltimo n�mero foram lidos. O limite de
n�meros � 100.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor[10], numero, contador = 0, ultimo, auxiliar, i;
	
	printf ("digite os numeros: \n");
	
	for ( i = 0; i < 10; i++) {
		
		scanf ("%d", &vetor[i]);
		if ( vetor[i] == 0) {
			break;
			
		} else {
			
		 	contador++;
		 	ultimo = vetor [i];
		 	
		 }
	}
	
	for (i = 0; i < 10; i++) {
		if ( vetor[i] == ultimo )
		auxiliar++;
	}
	
	printf ("\n            \n");
	printf ("a quantidade de numeros iguais ao ultimo eh: -- %d --", auxiliar);
		
	return 0;
}
