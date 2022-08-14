/*
Faça um programa que permita entrar com valores em uma matriz A de tamanho
3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz_A[3][4], matriz_B[3][4], i, j;
	
	printf ("digite os valores do da matriz \n");
	
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 4; j++) {
			scanf ("%d", &matriz_A[i][j]);
			matriz_B[i][j] = 3 * matriz_A[i][j];
		}
	}
	
	printf ("\n\n");
	printf ("-------------------------\n");
	
	printf ("os elementos da matriz multiplicados por 3 sao: \n");
	printf ("-------------------------\n");
	
	for ( i = 0; i < 3; i++) {
		printf ("\n");
		for ( j = 0; j < 4; j++) {
			printf ("%d \t", matriz_B[i][j]);
		}
	}
	
	
     return 0;	
}
