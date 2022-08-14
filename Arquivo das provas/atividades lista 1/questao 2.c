/*
2) Escreva um programa em C que contenha uma função que recebe como parâmetros
um vetor de inteiros v, o número de elementos dele (int) e ponteiros para 
variáveis inteiras nos quais devem ser retornados os valores maximo e minimo do
vetor. A assinatura da função pode ser:

void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/

#include <stdio.h>
#include <stdlib.h>
#define tamanho_vetor 10


void maximoMinimo(int *v, int n, int *maximo, int *minimo){
	
	int i;
	
	*maximo = v[0];
	*minimo = v[0];
	
	for ( i = 1; i < n; i++) {
		
		if ( v[i] > *maximo) {
			
			*maximo = v[i];
			
		} else {	

		if ( v[i] < *minimo) {
				
				*minimo = v[i];
			}
		} 
			
	 }
}

int main () {
	
	int vetor[tamanho_vetor] = {110 , 205, 303, 40, 520, 60, 750, 80, 980, -100};
	int max = 0, min = 0;
	
	maximoMinimo(vetor, tamanho_vetor, &max, &min);
	
	printf ("o valor maximo no vetor: %d \n", max);
	printf ("o valor minimo no vetor: %d \n", min);
	
	return 0;
}
