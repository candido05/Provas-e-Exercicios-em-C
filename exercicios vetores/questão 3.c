#include <stdio.h>
#include <stdlib.h>

//Construa uma programa em C que armazene 5 números em um vetor e imprima
//uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.

int main () {
	
	int vetor [5], i;
	
	printf ("digite os 5 valores do vetor: \n");
	
	for ( i = 0; i < 5; i++)
	    scanf ("%d", &vetor[i]);
	
	printf ("posicao \t numero \n");
	
	for ( i = 0; i < 5; i++) {
		if ( (vetor [i] % 2 ) == 0) {
		
		    printf ("%d \t\t %d \t par\n", i + 1, vetor[i]);
		} else 
		    printf ("%d \t\t %d \t impar\n", i + 1, vetor[i]);    
	}
	
	return 0;
}
