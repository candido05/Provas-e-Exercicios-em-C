/*
Faça um programa que leia e armazene vários números, até digitar o número
0. Imprimir quantos números iguais ao último número foram lidos. O limite de
números é 100.
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
