/*
Escreva um programa que aloque dinamicamente uma matriz de inteiros. As
dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma
função que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne
0, no caso contrário
*/

#include <stdio.h>
#include <stdlib.h>

int busca( int valor, int **matriz, int tamanho_linha, int tamanho_coluna){
	
	int i, j;
	
	for ( i = 0; i < tamanho_linha; i++) {
		for ( j = 0; j < tamanho_coluna; j++) {
			if ( valor == matriz[i][j]);
					return 1;
		}
	} 
	
	return 0;
}

int main () {
	
	int matriz_linha, matriz_coluna, i, j, **ponteiro_matriz, valor_consulta, resultado;
	
	printf ("informe o numero de linhas da matriz:  ");
	scanf ("%d", &matriz_linha);
	printf ("\n");
	
	printf ("informe o numero de colunas da matriz:  ");
	scanf ("%d", &matriz_coluna);
	printf ("\n");
	
	//alocando a memoria e lendo os valores
	ponteiro_matriz = (int*) malloc( matriz_linha * sizeof(int));
	
	for ( i = 0; i < matriz_linha; i++){
		
		ponteiro_matriz[i] = (int*) malloc(matriz_coluna * sizeof(int));
			
			for ( j = 0; j < matriz_coluna; j++) {
				
				printf ("informe um valor inteiro para a matriz: ( - %d  -  %d - )\n", i + 1, j + 1);
				scanf ("%d", &ponteiro_matriz[i][j]);
				printf ("\n");
			}
	}
	
	printf ("informe um valor inteiro para a consulta:  ");
	scanf ("%d", &valor_consulta);
	printf ("\n");
	
	resultado = busca( valor_consulta, ponteiro_matriz, matriz_linha, matriz_coluna);
	
	if ( resultado == 1) {
		printf ("encontrou.");
	} else {
		printf ("nao encontrou.");
	}
	
	for ( i = 0; i < matriz_linha; i++) {
		free(ponteiro_matriz[i]);
	}
	free(ponteiro_matriz);
	
	return 0;
}
