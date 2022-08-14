/*
Uma floricultura conhecedora de sua clientela gostaria de fazer um programa que
pudesse controlar sempre um estoque mínimo de determinadas plantas, pois
todo dia, pela manhã, o dono faz novas aquisições. Criar um algoritmo que deixe
cadastrar 50 plantas, nome, estoque mínimo, estoque atual. Imprimir ao final do
programa uma lista das plantas que devem ser adquiridas
*/


#include <stdio.h>
#include <stdlib.h>

int main () { 

   char nome[50][100];
   int estoque[50][2], i;
   
   printf ("digite os dados das 50 plantas: \n");
   printf ("\n\n");
   printf ("\n-------------------------\n");
   
   for ( i = 0; i < 5; i++) {
   	
   	printf ("digite o nome da planta: \n");
   	fflush (stdin);
   	fgets (nome[i], 100, stdin);
	
	printf ("\n-------------------------\n");
	
    printf ("digite o estoque atual: \n");
    scanf ("%d", &estoque[i][0]);
    
    printf ("\n-------------------------\n");
    
    printf ("digite o estoque minimo: \n");
	scanf ("%d", &estoque[i][1]);
	
	printf ("\n-------------------------\n");
	
   }
    printf ("\n\n");
    printf("Plantas com estoque baixo\n");
    
    printf ("\n-------------------------\n");
    
	for ( i = 0; i < 5; i++ ) {
		if (estoque[i][0] < estoque[i][1])
	printf("NOME -- %s -- ESTOQUE ATUAL -- %d -- ESTOQUE MINIMO -- %d -- ", nome[i], estoque[i][0], estoque[i][1]);
    printf ("\n\n");
}

   
   return 0;  
}
