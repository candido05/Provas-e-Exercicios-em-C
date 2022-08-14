/*
1) Escreva um programa em C que receba um valor n (int) de entrada e, em seguida:
- Aloque espaço dinamicamente memoria para criar um vetor de caracteres 
(char) de n elementos e verifique se o espaço foi alocado com sucesso;
- preencha o vetor criado com n caracteres digitados pelo usuario; 
- exiba o vetor preenchido na tela
- libere o espaço de memoria alocado
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	char *array, caractere;
	
	printf ("digite o tamanho do array:  ");
	scanf ("%d", &numero);
	printf ("\n");
	
	array = (char*)malloc( numero * sizeof(char));
	
	if ( array == NULL ) {
		
		printf ("erro de alocacao\n");
		exit(0);
	}
	
	for ( i = 0; i < numero; i++) {
		
		printf ("digite uma letra %d:  ", i + 1);
		scanf (" %c", &caractere);
		printf ("\n");
		array[i] = caractere;
	} 
	
	printf ("\n\n");
	
	printf ("conteudo do array:  \n");
	
	for ( i = 0; i < numero; i++) {
		
		printf ("%c \t", array[i]);
	}

	free(array);
	
	return 0;
}
