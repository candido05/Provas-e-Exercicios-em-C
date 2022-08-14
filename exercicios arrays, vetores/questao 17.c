/*
Faça um programa que leia um conjunto de 30 valores inteiros, armazene-os em
um vetor e os imprima ao contrário da ordem de leitura
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor[10], i;
	
	printf ("digite os numeros: \n");
	for ( i = 0; i < 10; i++){
		scanf ("%d", &vetor[i]);
	}
	
	printf ("\n          \n");
	printf ("numeros em ordem contraria a leitura: \n");
	printf ("\n          \n");
	for ( i = 9; i >= 0; i--){
		printf (" -- %d --\n", vetor[i]);
	}
	
	}
