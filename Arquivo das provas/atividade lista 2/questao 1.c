/*
Escreva uma função que recebe uma string (array de caracteres) e uma letra
(um caracter) e devolve um vetor de inteiros contendo as posições (índices no
vetor da string) onde a letra foi encontrada) e um inteiro contendo o tamanho
do vetor criado (total de letras iguais encontradas). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conta_caracteres( char* str, char c, int* vetor, int* tamanho_vetor) {
	
	int tamanho_str = strlen(str);
	int vetor_pos = 0, i;
	
//	if ( vetor = NULL) {
	
	vetor = (int*)malloc( tamanho_str * sizeof(int));
//	}
	
	for ( i = 0; i < tamanho_str; i++) {
		
		if ( str[i] == c ) {
			vetor[vetor_pos] = i;
			printf ("achei %c na posicao %d\n", c, vetor[vetor_pos] + 1);
			vetor_pos++;
		}
		
	}
	
	*tamanho_vetor = vetor_pos;
}

int main () {
	
	char* string_teste = "ABCDAEFGHIAJPQ";	
	int* vetor_retorno;
	int qtd_retorno, i;
	char c_busca = 'A';
	
	conta_caracteres( string_teste, c_busca, vetor_retorno, &qtd_retorno);
	
	printf ("achei %c em %s, %d vezes\n", c_busca, string_teste, qtd_retorno);
	/*
	printf ("\nAs posicoes:  \n");
	
	for ( i = 0; i < qtd_retorno; i++) {
		
		printf ("\t %d \t", vetor_retorno[i]);	
	}
	*/
	printf ("\n");
	
	return 0;
}
