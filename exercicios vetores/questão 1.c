#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa em C que armazene 15 n�meros inteiros em um vetor e depois
//permita que o usu�rio digite um n�mero inteiro para ser buscado no vetor, se
//for encontrado o programa deve imprimir a posi��o desse n�mero no vetor, caso
//contrario, deve imprimir a mensagem: "Nao encontrado!".

int main () {
	
	int vetor [5], numero_encontrado, auxiliar, i;
	
	printf ("digite os 5 valores do vetor: \n");
	
	for (i = 0; i < 5; i++) {
	
	    scanf ("%d", &vetor[i]);
    }
	
	printf ("digite um numero para procurar no vetor: \n");
	scanf ("%d", &numero_encontrado);
	
	for(i = 0; i < 5; i++) {
		if (vetor [i] == numero_encontrado) {
			printf ("numero encontrado na posicao %d\n", i += 1);
			auxiliar = 1;
			
		}
	}
	
	if ( auxiliar == 0)
	   printf ("numero nao encontrado.");
	
	return 0;
}
