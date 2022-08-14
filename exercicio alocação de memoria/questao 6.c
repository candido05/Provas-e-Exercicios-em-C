/*
Crie uma função que receba um texto e retorne o ponteiro para esse texto invertido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverte( char *texto) {
	
	int i, j = 0;
	
	char *texto_2 = malloc(strlen(texto) * sizeof(char));
	
	//invertendo o texto
	//for ( i = strlen(texto) - 1; i >= 0; i--)
	for ( i = 0 ; i <= strlen(texto) - 1; i++){
		
		texto_2[j] = texto[i];
		j++;
	} 
	
	texto_2[j] = '\0';
	return texto_2;
}

int main () {
	
	char frase[50];
	char *frase_2;
	
	printf ("informe uma frase:  \n");
	fgets( frase, 50, stdin);
	printf ("\n\n");
	//acionar a função para inverter
	
	frase_2 = inverte(frase);
	
	printf ("invertido:  %s  \n", frase_2);
	
	free(frase_2);
	return 0;
}
