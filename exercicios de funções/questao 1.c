/*
Faça um programa em C que leia três números e, para cada um, imprimir o dobro.
O cálculo deverá ser realizado por uma função e o resultado impresso ao final do
programa.
*/

#include <stdio.h>
 #include <stdlib.h>

 void dobraNumero(int n1, int n2, int n3);

 void main() {
 	
 	int n1, n2, n3;

	printf("Digite os 3 numeros:");
	printf ("\n----------------------\n");
	
 	printf("\nDigite o 1 numeros:");
 	scanf("%d", &n1);
 	printf ("\n");
 	
	printf("\nDigite o 2 numeros:");
 	scanf("%d", &n2);
 	printf ("\n");
 	
	printf("\nDigite o 3 numeros:");
 	scanf("%d", &n3);
 	printf ("\n"); 	

 	dobraNumero(n1, n2, n3);
 
 	}

 void dobraNumero(int n1, int n2, int n3) {
 	
	printf("\nDobro do numero 1: %d", n1 * 2);
 	printf("\nDobro do numero 2: %d", n2 * 2);
 	printf("\nDobro do numero 3: %d", n3 * 2);
 
 }
