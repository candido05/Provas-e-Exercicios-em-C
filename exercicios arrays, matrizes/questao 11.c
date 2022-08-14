/*
Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C^t.
A matriz transposta é gerada trocando linha por coluna. Veja o exemplo a seguir:

C: 1 2 3      C^t : 1 4
   4 5 6            2 5
                    3 6
*/

#include <stdio.h>
#include <stdlib.h>

int main () { 

   int matriz_c[2][3], matriz_transposta[3][2], i, j;

   printf ("digite os valores da matriz: \n");
   for ( i = 0; i < 2; i++) {
   	for ( j = 0; j < 3; j++) 
   	    scanf ("%d", &matriz_c[i][j]);
   }
   
   for ( i = 0; i < 2; i++) {
    	printf ("\n");
	for( j = 0; j < 3; j++) {
		printf ("%d \t", matriz_c[i][j]);	   
	    }
    }

   printf ("\n\n");
   printf ("\n-------------------------\n");
	
   for ( i = 0; i < 2; i++)  {
   	for ( j = 0; j < 3; j++)
   	   matriz_transposta[j][i] = matriz_c[i][j];
   }

   printf ("os elementos da matriz tranposta sao: \n");
   
   for ( i = 0; i < 3; i++) {
   	   printf ("\n");
   	for ( j = 0; j < 2; j++) {
   		  printf ("%d \t", matriz_transposta[i][j]);
	   }
   }



   return 0;
}
