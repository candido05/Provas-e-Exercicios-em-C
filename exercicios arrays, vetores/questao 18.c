/*
. Faça um programa em C que permita entrar com dados para um vetor VET do tipo
inteiro com 20 posições, em que podem existir vários elementos repetidos. Gere
um vetor VET2 ordenado a partir do vetor VET e que terá apenas os elementos
não repetidos.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor_1[10], vetor_2[10], i, j, auxiliar, contador = 0;
	
	//leitura dos valores do vetor.
	printf ("digite os valores do 1º vetor: \n");
	for ( i = 0; i < 10; i++) {
		scanf ("%d", &vetor_1[i]);
	}
	
	//descobrindo qual valor é maior que o outro para a ordenação.
	for ( i = 0; i < 10 - 1; i++) {
		for ( j = i + 1; j < 10; j++) {
			if ( vetor_1[i] > vetor_1[j]) {
				auxiliar = vetor_1[i];
				vetor_1[i] = vetor_1[j];
				vetor_1[j] = auxiliar;
			}
		}
	}
	
	//alocação dos valores no outro vetor.
	for ( i = 0; i < 10; i++) {
		if ( i == 0 || vetor_1[i - 1] != vetor_1[i]) {
			vetor_2[contador] = vetor_1[i];
			contador++;
		}
	}
	
	printf ("\n          \n");
	printf ("--------------------------------------------\n");
	printf ("vetor ordenado e sem elementos repetifos: \n");
	printf ("\n          \n");
	for ( i = 0; i < contador; i++)
	    printf ("  --  %d  --  \n", vetor_2[i] ); 
	
	}
