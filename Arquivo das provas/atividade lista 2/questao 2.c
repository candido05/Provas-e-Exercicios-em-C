/*
2) Faça um programa em que tenha uma função que receba dois valores inteiros
m e n; use esses valores para criar um array de n strings com m caracteres
aleatórios - o array resultante deverá ser o valor de retorno da função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char** gera_vetor_str (int m, int n) {
	
	int i, j;
	char** array_de_strings;
	
	array_de_strings = (char**) malloc( n * sizeof(char*));
	
	for ( i = 0; i < n; i++) {
		array_de_strings[i] = (char**) malloc( m * sizeof(char*));
		
		for ( j = 0; j< m; j++) {
			
			array_de_strings[i][j] = (char) ((rand() %26) + 65);
		}
		
		array_de_strings[i][j] = '\0';
	}
	
	return array_de_strings;
}

int main () {
	
	srand(time(NULL));
	
	int i;
	int qrd_str = 10;
	int tam_str = 5;
	
	char** array_gerado = gera_vetor_str (qrd_str, tam_str); 
	
	for ( i = 0; i < qrd_str; i++) {
		
	printf ("%s \n", array_gerado[i]);
	}
	
	return  0;
}
