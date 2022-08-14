/*
Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas
vendas oferecendo desconto. Faça um programa que permita entrar com o valor
de um produto e o percentual de desconto e imprimir o novo valor com base no
percentual informado. Para fazer o cálculo, implemente uma função.
*/

#include <stdio.h>
#include <stdlib.h>

float desconto ( float valor, float porcentagem) {
	
	return valor - ( valor * (porcentagem / 100) );
}

int main () {
	
	float preco, porcento_desconto, valor_reajustado;
	
	printf ("digite o valor do produto:  ");
	scanf ("%f", &preco);
	printf ("\n");
	
	printf ("digite o valor da porcentagem de desconto:  ");
	scanf ("%f", &porcento_desconto);
	printf ("\n");
	
	valor_reajustado = desconto ( preco, porcento_desconto);
	
	printf ("\n----------------------\n");
	printf ("o valor do reajuste eh: %5.3f\n\n", valor_reajustado); 
	
	
	return 0;
}
