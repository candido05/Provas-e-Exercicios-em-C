/*
Faça um programa que leia um vetor com tamanho 10 de números inteiros.
Após ler, uma função deve verificar se o vetor está ordenado, de forma crescente
ou decrescente, ou se não está ordenado. Imprimir essa resposta no final do
programa
*/

#include <stdlib.h>
#include <stdio.h>

int vetor (int *v) {
	
	int crecente = 1, decrecente = 1, i, j;
	
	for ( i = 0; i < 9; i++) {
		
		if (v[i] > v[ i +1 ])
			crecente = 0;
		else if ( v[i] < v[i + 1])
			decrecente = 0;
	}
	
	if ( crecente == 1)
		return 1;
	else if (decrecente == 1)
		return 2;
	else
		return 0;	
		
}

int main () {
	
	int v[10], i, resultado;
	
	printf ("digite os 10 elementos do vetor:  ");
	
	for ( i = 0; i < 10; i++) 
		scanf ("%d", &v[i]);
	
	resultado = vetor(v);
	
	printf ("\n\n");
	
	if ( resultado == 1)
		printf ("vetor ordenado de forma crecente \n");
	else if ( resultado == 2) 
		printf ("vetor ordenado de forma decrecente \n");
	else
		printf ("vetor nao ordenado \n");			
	
	return 0;
}
