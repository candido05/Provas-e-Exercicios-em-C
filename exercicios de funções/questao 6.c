/*
Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira
e imprimir o novo saldo após o reajuste. O cálculo deve ser feito por uma função.
*/

#include <stdio.h>
#include <stdlib.h>

int reajuste_saldo ( float saldo, float reajuste) {
	
	return saldo + ( saldo * ( reajuste / 100));
}

int main () {
	
	float valor_saldo, valor_reajuste, novo_saldo = 0;
	
	printf ("digite o saldo: ");
	scanf ("%f", &valor_saldo);
	printf ("\n");
	
	printf ("digite a porcetagem do reajuste: ");
	scanf ("%f", &valor_reajuste);
	printf ("\n");
	
	novo_saldo = reajuste_saldo (valor_saldo, valor_reajuste);
	
	printf ("\n------------------------\n");
	printf ("o novo saldo reajustado eh: %2.f", novo_saldo);
	
	
	return 0;
}
