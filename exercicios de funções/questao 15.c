/*
Construa um programa em C que leia um caractere (letra) e, por meio de uma
função, retorne se este caractere é uma consoante ou uma vogal. Ao final imprima
o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int letra ( char c) {
	
	switch (c) {
		
		case 'a' :
			return 1;
			break;
		
		
		case 'e' :
			return 1;
			break;
		
		
		case 'i' :
			return 1;
			break;
		 
		
		case 'o' :
			return 1;
			break;
		
		
		case 'u' :
			return 1;
			break;
		
		
		default :
			return 0;
			break;
		
	}
	
}

int main () {
	
	char c;
	int i;
	
	printf ("digite o caractere para verificar:  ");
	scanf ("%c", &c);
	printf ("\n\n");
	printf ("\n----------------------\n");
	
	i = letra (c);
	
	if (i == 1)
		 printf("\nVogal");
 	else
 		printf("\nConsoante");
	
	return 0;
}
