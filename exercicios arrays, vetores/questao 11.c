/*
Construa um programa que leia dados para um vetor de 100 elementos inteiros.
Imprimir o maior e o menor, sem ordenar, o percentual de números pares e a
média dos elementos do vetor
*/


#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int vetor[10], i, maior, menor;
  float media = 0, pares = 0, porcetagem_pares;
  
  printf ("digite os 10 valores do vetor\n");
  for ( i = 0; i < 10; i++) {
    scanf ("%d", &vetor[i]);
  }
  
  maior = vetor[0];
  menor = vetor[0];
  
  for ( i = 1; i < 10; i++) {
  	
  	if (vetor[i] > maior) 
  	    maior = vetor[i];
  	    
  	if (vetor[i] < 0)
  	    menor = vetor[i];
  	    
  	media += vetor[i];
  	
	if ((vetor[i] % 2) == 0)
	    pares++;      
  }
  
  porcetagem_pares = (pares / 100);
  media = (media / 10);
  
  printf ("\n                  \n");
  printf ("\n---------------------------------\n");
  
  printf ("o maior elemento do vetor eh: %d\n", maior);
  printf ("\n---------------------------------\n");
  printf ("o menor elemento do vetor eh: %d\n", menor);
  printf ("\n---------------------------------\n");
  printf ("a media dos elementos do vetor eh: %2.f\n", media);
  printf ("\n---------------------------------\n");
  printf ("a procetagem de numeros pares eh: %f\n", porcetagem_pares);
  printf ("\n---------------------------------\n");
  
  
  }
