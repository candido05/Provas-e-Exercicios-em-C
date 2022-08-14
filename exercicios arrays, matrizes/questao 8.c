/*
Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos.
*/

#include <stdio.h>
#include <stdlib.h>

int main () { 

    int matriz[4][5], j, i, soma = 0;

    printf ("digite os valores da matriz: \n");
	
	for ( i = 0; i < 4; i++) {
		for( j = 0; j < 5; j++) {
		   scanf ("%d", &matriz[i][j]);
		   soma += matriz[i][j];
	    }
    }
	
	printf ("\n\n");
	printf ("\n-------------------------\n");
	
    for ( i = 0; i < 4; i++) {
    	printf ("\n");
	for( j = 0; j < 5; j++) {
		printf ("%d \t", matriz[i][j]);	   
	    }
    }
	
	printf ("\n\n");
	printf ("\n-------------------------\n");
	printf ("\n\n");
	
    printf ("a soma dso valores da matriz foi: -- %d --", soma); 
    
    printf ("\n\n");
   return 0;
}
