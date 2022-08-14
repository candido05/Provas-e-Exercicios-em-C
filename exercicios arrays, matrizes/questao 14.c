/*
Crie um programa que leia e armazene os elementos de uma matriz inteira com
tamanho 5 X 5 e imprimi-la. Troque, a seguir:

• a segunda linha pela quinta;
• a terceira coluna pela quinta;
• a diagonal principal pela diagonal secundária.
*/

#include <stdio.h>
#include <stdlib.h>

int main () { 

    int matriz[5][5], i, j, k, auxiliar;

    printf (" digite os valores da matriz: \n");
    
    for ( i = 0; i < 5; i++) {
    	for ( j = 0; j < 5; j++) {
    		scanf ("%d", &matriz[i][j]);
		}
	}

    printf ("\n");
    printf ("\n-------------------------------------\n");

    printf ("matriz impressa: \n");

     for ( i = 0; i < 5; i++) {
     	printf ("\n");
    	for ( j = 0; j < 5; j++) {
    		printf ("%d \t", matriz[i][j]);
		}
	}

    printf ("\n");
    printf ("\n-------------------------------------\n");

    //trocando a segunda linha pela quinta:
    printf ("trocando a segunda linha pela quinta: \n");

    for ( j = 0; j < 5; j++) {
    	
    	auxiliar = matriz[1][j];
    	matriz[1][j] = matriz[4][j];
    	matriz[4][j] = auxiliar;
    	
	}

    //imprimindo a matriz:

    for ( i = 0; i < 5; i++) {
     	printf ("\n");
    	for ( j = 0; j < 5; j++) {
    		printf ("%d \t", matriz[i][j]);
		}
	}

    printf ("\n");
    printf ("\n-------------------------------------\n");

    //trocando a terceira coluna pela quinta:
 
    printf ("trocando a terceira coluna pela quinta: \n");

     for ( j = 0; j < 5; j++) {
    	
    	auxiliar = matriz[i][2];
    	matriz[i][2] = matriz[i][4];
    	matriz[i][4] = auxiliar;
    	
	}

   
    for ( i = 0; i < 5; i++) {
     	printf ("\n");
    	for ( j = 0; j < 5; j++) {
    		printf ("%d \t", matriz[i][j]);
		}
	}

    printf ("\n");
    printf ("\n-------------------------------------\n");
 
    //trocando a diagonal principal pela diagonal secundária
    
    printf ("trocando a diagonal principal pela diagonal secundária \n");
    
    i = 0;
    k = 4;
    
    for ( j = 0; j < 5; j++) {
    	auxiliar = matriz[i][j];
    	matriz[i][j] = matriz[k][j];
    	matriz[k][j] = auxiliar;
    	k--;
    	i++;
	}
    
    for ( i = 0; i < 5; i++) {
     	printf ("\n");
    	for ( j = 0; j < 5; j++) {
    		printf ("%d \t", matriz[i][j]);
		}
	}


   return 0;
}
