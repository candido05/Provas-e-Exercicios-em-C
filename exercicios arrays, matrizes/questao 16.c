/*
. Faça um programa em C que possa armazenar as alturas de dez atletas de cinco
delegações que participarão dos jogos de verão. Imprimir a maior altura de cada
delegação
*/

#include <stdio.h>
#include <stdlib.h>

int main () { 

   int matriz[5][10], i, j, maior;

   printf ("digite as alturas dos atletas: \n");
   printf ("\n-------------------------------------\n");
   
   for ( i = 0; i < 5; i++) {
   	printf ("delegacao %d: \n", i + 1);
   	  for ( j = 0; j < 10; j++) {
   	  	      scanf ("%d", &matriz[i][j]);
		}
   }

   
   printf ("\n-------------------------------------\n");

   printf ("MAIORES ALTURAS ENTRE OS DELEGADOS: \n\n");
   for ( i = 0; i < 5; i++) {
   	maior = matriz[i][0];
   	    for ( j = 1; j < 10; j++) {
   	  	    if ( matriz[i][j] > maior) {
   	  	    	maior = matriz[i][j];
			}
			
			printf ("altura do maior delegado eh ( -- %d -- ) da delegacao ( -- %d -- )\n", maior, i + 1);
			
		 }
   }



  return 0;
}
