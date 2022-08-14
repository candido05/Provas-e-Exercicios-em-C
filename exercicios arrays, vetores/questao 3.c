/*

Construa uma programa em C que armazene 15 números em um vetor e imprima
uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.

*/

#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int vetor[15], i;
	
	printf ("digite os 15 valores do vator: \n");
	for ( i = 0; i < 15; i++)
	scanf ("%d", &vetor[i]);
	
	printf ("posicao \t numeros \n");
	for ( i = 0; i < 15; i++) {
		
	   if ((vetor[i] % 2) == 0)  
	      printf ("%d \t\t %d \t par\n", i + 1, vetor[i]);
	   else 
	       printf ("%d \t\t %d \t impar\n", i + 1, vetor[i]);
	
	
  }
	
   return 0;	
}
