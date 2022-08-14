/*
Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w
cujos componentes são os fatoriais dos respectivos componentes de vet
*/


#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor_VET[10], vetor_W[10], i, j, auxiliar = 0;
	
	printf ("digite os 10 numeros do vetor VET: \n");	
	for ( i = 0; i < 10; i++) 
	   scanf ("%d", &vetor_VET[i]);
		
	
	for ( i = 0; i < 10; i++) {
		auxiliar = 1;
		if (vetor_VET[i] == 1) {
			vetor_W[i] = 1;
		} else {
			for ( j = 1; j < vetor_VET[i]; j++) {
				auxiliar *= j + 1;
			}
			vetor_W[i] = auxiliar;
		}
	}
	
	
    for	( i = 0; i < 10; i++) {
    	
    printf ("\n                  \n");
	
    printf ("\n NUMERO ( %d ) --- FATORIAL ( %d )\n", vetor_VET[i], vetor_W[i]);
    	
    printf ("\n                  \n");
	printf ("\n---------------------------------\n");
	printf ("\n                  \n");
	
	}
	
	




	
   }
