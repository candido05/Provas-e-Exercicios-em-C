/*
Faça um programa que leia uma matriz 5 X 5 inteira e apresente uma determinada
linha da matriz, solicitada via teclado.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz[5][5], i, j, opcao;
	
	printf ("digite os valores da matriz: \n");
	
	for ( i = 0; i < 5; i++) {
		for ( j = 0; j < 5; j++) {
			scanf ("%d", &matriz[i][j]);
		}
	}
	
	printf ("\n------------------------\n");
	
	for ( i = 0; i < 5; i++) {
		printf ("\n");
		  for ( j = 0; j < 5; j++) {
		  	printf ("%d \t", matriz[i][j]);
		  }
	}
	
	printf ("\n\n");
	
	printf ("diigite a linha da matriz: \n");
	scanf ("%d", &opcao);
	
	if (opcao > 0 && opcao < 6) {
		opcao += -1;
		printf ("\nelementos da linha da matriz: \n") ;
		
		for ( j = 0; j < 5; j++) {
			printf ("%d ", matriz[opcao][j]);
		}
	} else {
		printf ("a linha nao existe!");
	}
	

  return 0;	
}
