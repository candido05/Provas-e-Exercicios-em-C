/*
Usando a estrutura ret�ngulo do exerc�cio anterior, fa�a um programa que declare
e leia uma estrutura ret�ngulo e um ponto, e informe se esse ponto est� ou n�o
dentro do ret�ngulo
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	
	int x, y;
	
};

int main () {
	
   struct ponto pA, pB, p;
   
   printf ("retngulo: X ( ponto superior esquerdo ) \n");
   scanf ("%d", &pA.x);
   printf ("\n--------------------------------------------\n");	
   printf ("retngulo: Y ( ponto infeior esquerdo ) \n");
   scanf ("%d", &pA.y);
   printf ("\n--------------------------------------------\n");	
   
   printf ("retngulo: X ( ponto superior direito ) \n");
   scanf ("%d", &pB.x);
   printf ("\n--------------------------------------------\n");	
   printf ("retngulo: Y ( ponto inferior direito ) \n");
   scanf ("%d", &pB.y);
   printf ("\n--------------------------------------------\n");	
		
   printf ("ponto: X \n");
   scanf ("%d", &p.x);	
   printf ("\n--------------------------------------------\n");	
   printf ("ponto Y \n");
   scanf ("%d", &p.y);
   
   printf ("\n\n--------------------------------------------\n\n");	
   
   if ( p.x >= pA.x && p.x <= pB.x && p.y >= pA.y && p.y <= pA.y ) {
   	    printf ("o ponto esta dentro do retangulo");
   } else {
   	    printf ("o ponto esta fora do retangulo");
   }
	
	return 0;
}
