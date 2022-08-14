/*
Faça um programa que armazene 50 números inteiros em um vetor. O programa
deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do
elemento do primeiro vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor[5], vetor_do_quadaro[5], i;
	
	printf ("digite os valores do vetor: \n");
	
	for ( i = 0; i < 5; i++) {
	    scanf ("%d", &vetor[i]);
	    vetor_do_quadaro[i] = vetor[i] * vetor[i];
	}
	
	printf ("\n                  \n");
	printf ("quadadro dos elementos do vetor: \n");
	printf ("\n                  \n");
	
	for (i = 0; i < 5; i++) {

	    printf ("o quadrado do numero -- ( %d ) -- eh o numero -- ( %d ) --", vetor[i], vetor_do_quadaro[i]);
	    printf ("\n---------------------------------\n");
	    printf ("\n                  \n");
	
    
	}	
	
	
	
	
	
	}
