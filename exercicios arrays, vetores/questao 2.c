/*

Fa�a um programa que armazene 10 letras em um vetor e imprima uma listagem
numerada.

*/

#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int i;
	char letras[10];
	
	printf ("digite 10 letras \n");
	for ( i = 0; i < 10; i++) {
	   fflush (stdin);
	   scanf ("%c", &letras[i]);	
	}
	
	printf ("lista com aas letras numeradas");
	
	for  ( i = 0; i < 10; i++) {
	
	   printf ("%d letra: %c \n", i + 1, letras[i]);
	}
	
  return 0;
}	
