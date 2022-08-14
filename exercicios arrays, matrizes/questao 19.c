/*
Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
de uma loja, em cada linha represente um mês do ano, e cada coluna, uma semana
do mês. Calcule e imprima:
• total vendido em cada mês do ano;
• total vendido em cada semana durante todo o ano;
• total vendido no ano.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float matriz[12][4], total = 0, mes = 0;
	int i, j, opcao;
	
	for ( i = 0; i < 12; i++) {
	   printf ("informe as vendas do mes %d: \n", i + 1);
	   for ( j = 0; j < 4; j++) {
	   	   printf ("semana %d: \n", j +1);
	   	     scanf ("%f", &matriz[i][j]);
	   }  
	}
	
	printf ("\n-----------------------------------------------\n");
	
	for ( i = 0; i < 12; i++) {
		mes = 0;
		printf ("mes %d: \n", i +1);
		for ( j = 0; j < 4; j++) {
			printf ("total vendido na semana %d: %2.f \n", j + 1, matriz[i][j]);
			mes += matriz[i][j];		
			total += matriz[i][j];
			}
			printf ("\n\ntotal vendido no mes %d: %2.f \n\n", i + 1, mes);
	}
	
	printf ("\ntotal vendido no ano: %2.f\n", total);
	
	return 0;
	}
