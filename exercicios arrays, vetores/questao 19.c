/*
Suponha dois vetores de 30 elementos cada, contendo: código e telefone. Faça
um programa que permita buscar pelo código e imprimir o telefone.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int codigo[30], telefone[30], i, codigo_telefone;
	
	for ( i = 0; i < 30; i++) {
		printf ("digite o codigo do telefone ( -- %d -- ): \n", i +1);
		scanf ("%d", &codigo[i]);
		printf ("--------------------------------------------\n");
	    printf ("\n          \n");
		printf ("digite o telefone ( -- %d -- ): \n",  i +1);
		scanf ("%d", &telefone[i]);
		printf ("\n          \n");
	    printf ("--------------------------------------------\n");
	}
	
	printf ("\n          \n");
	printf ("--------------------------------------------\n");
	
	printf ("digite o codigo para procurar: \n");
	scanf ("%d", &codigo_telefone);
	
	printf ("\n          \n");
	printf ("--------------------------------------------\n");
	
		for ( i = 0; i < 30; i++) {
			if ( codigo[i] == codigo_telefone) {
				printf ("telefone:   --  %d   --   \n", telefone[i]);
			} else {
				printf ("numero de telefone nao encontrado");
			}
		}	
	
	
	}
