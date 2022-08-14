/*
3) Escreva um programa em C que contenha uma função que receba um array de 
inteiros como argumento e o tamanho (int) do array. Faça esta função alterar
todos os valores negativos contidos no array pelo valor equivalente positivo. 
A função deverá retornar a quantidade (int) de valores modificados e pode ter
a assinatura abaixo:

int desnegativa(int vetor[], int tamanho);

Faça o programa em C para:
- receber um valor n (int) do usuário
- alocar dinamicamente o array
- solicitar n valores inteiros ao usuário para armazenar no array 
- invocar a função implementada (desnegativa) para modificar o array
- exibir o array modificado e a quantidade de itens modificados
- liberar o espaço de memória alocado para o array
*/

#include <stdio.h>
#include <stdlib.h>

int desnegativa(int vetor[], int tamanho) {
	
	int contador = 0, i;
	
	for ( i = 0; i < tamanho; i++) {
		
		if ( vetor[i] < 0) {
			vetor[i] *= - 1;
			contador++;
		}
		
	}
	
	return contador;
}


int main () {
	
	int n = 0, i, mod;
	int *array;
	
	printf ("digite o tamanho do array:  ");
	scanf ("%d", &n);
	printf ("\n");
	
	array = (int*)malloc( n* sizeof(int));
	
	for ( i = 0; i < n; i++) {
		
		printf ("digite um numero - %d - :  ", i + 1);
		scanf ("%d", &array[i]);
		printf ("\n");
	}
	
	mod = desnegativa( array, n);
	
	for ( i = 0; i < n; i++) {
		
		printf ("\nelemento %d modoficado:  %d\n ", i + 1, array[i]);
	}
	
	printf ("\n\n");
	printf ("foram modificados %d elemtos", mod);
	
	free(array);
	
	return 0;
}
