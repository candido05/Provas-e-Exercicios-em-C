/*
Crie um programa em C para ler um conjunto de 100 n�meros reais e informe:
� quantos n�meros lidos s�o iguais a 30
� quantos s�o maior que a m�dia
� quantos s�o iguais a m�dia
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetor[10], i, igual_30 = 0, maior = 0, igual_media = 0;
	float media;
	
	printf ("digite os numeros: \n");
	
	for ( i = 0; i < 10; i++) {
		scanf ("%d", &vetor[i]);
		media += vetor [i];
		if (vetor[i] == 30 )
		   igual_30++;
	}
	
	media = media / 10;
	
	for ( i = 0; i < 10; i++) {
      if (vetor[i] > media) {
      	maior++;
      	
	  } else if (vetor[i] == media ) {
	  	        igual_media++;
	  	    
	  }	
		
    }
	
	printf ("\n          \n");
	printf ("--------------------------------------------\n");
	printf ("quantidade de numeros iguais a 30 eh: -- %d -- \n", igual_30);
	printf ("\n--------------------------------------------\n");
	printf ("quantidade de numeros maiores do que a media eh: -- %d -- \n", maior);	
	printf ("\n--------------------------------------------\n");
	printf ("a quantidaded de numeros iguis a media eh: -- %d -- \n", igual_media);	

	}
