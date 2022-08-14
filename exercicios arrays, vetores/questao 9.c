/*
Faça um programa em C que leia dois conjuntos de números inteiros, tendo
cada um 10 elementos. Ao final o programa deve listar os elementos comuns aos
conjuntos
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor1[10], vetor2[10], vetor3[10], i, j, contador = 0;
		
	printf ("digite os 10 numeros do vetor 1: \n");	
	for ( i = 0; i < 10; i++) 
	   scanf ("%d", &vetor1[i]);
		
	printf ("\n                  \n");
	printf ("\n---------------------------------\n");
	printf ("\n                  \n");
	
	printf ("digite os 10 numeros do vetor 2: \n");	
	for ( i = 0; i < 10; i++) 
	   scanf ("%d", &vetor2[i]);
		
	printf ("\n                  \n");
	printf ("\n---------------------------------\n");
	printf ("\n                  \n");
	
	for ( i = 0; i < 10; i++) {
		for ( j = 0; j < 10; j++) {
			if ( vetor1[i] == vetor2[j]) {
				vetor3[contador] = vetor1[i];
				contador++;
				break;
			}
		}
	}
	
	printf ("\nelementos comuns aos conjuntos: \n");
	for ( i = 0; i < contador; i++) {
		printf ("%d\n", vetor3[i]);
	}
}
