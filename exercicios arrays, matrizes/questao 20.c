/*
Supondo que uma matriz apresente em cada linha o total de produtos vendidos ao
mês por uma loja que trabalha com cinco tipos diferentes de produtos, construir
um programa que leia esse total e, ao final, apresente o total de produtos vendidos
em cada mês e o total de vendas por ano por produto.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float matriz[12][5], total = 0, mes = 0;
	int i, j, opcao;
	
	for ( i = 0; i < 12; i++) {
		printf ("mes %d: \n", i + 1);
		for ( j = 0; j < 5; j++) {
			printf ("informe o total do produto %d\n", j + 1);
			scanf ("%f", &matriz[i][j]);
		}
	}
	
	printf ("\n\n");
	
	for ( i = 0; i < 12; i++) {
		mes = 0;
		for ( j = 0; j < 5; j++) {
			mes += matriz[i][j];
		    total += matriz[i][j];
		}
		printf ("total vendido no mes %d: %2.f \n", i + 1, mes);
	}
	
	printf ("total vendido em ano: %2.f\n", total);
		
    return 0;	
}
