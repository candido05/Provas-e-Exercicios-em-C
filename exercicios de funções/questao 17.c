/*
Implemente um programa que leia uma mensagem e um caractere. Ap�s a leitura,
o programa deve, por meio de fun��o, retirar todas as ocorr�ncias do caractere
informado na mensagem colocando * em seu lugar. A fun��o deve tamb�m
retornar o total de caracteres retirados. Ao final, o programa deve imprimir a frase
ajustada e a quantidade de caracteres substitu�dos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contra_letra ( char c[100], char caractere) {
	
	int i, contador = 0;
	
	for ( i = 0; i < strlen(c); i++) {
		
		if ( c[i] == caractere) {
		c[i] = '*';	
		contador++;	
			
		}
	}
	
	for ( i = 0; i < strlen(c); i++) {
		
		printf (" %c ", c[i]);
		
	}
	
	return contador;
}

int main () {
	
	char frase[100], palavra;
	int Contador; 
	
	printf ("digite a frase:  ");
	gets(frase);
	printf ("\n");
	
	printf ("informe o caractere:  ");
	scanf ("%c", &palavra);
	printf ("\n");
	
	Contador = contra_letra (frase, palavra);
	
	printf ("\n");
	
	printf ("a qunatidade de caracteres encontrada foi:  %d\n", Contador);	
	

	return 0;
}
