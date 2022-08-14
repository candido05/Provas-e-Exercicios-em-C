/*
5) Considere o tipo de dado tRetangulo definido abaixo:
typedef struct {
	float base;
	float altura;
} tRetangulo;

Fa�a um programa em C que contenha uma fun��o que receba como argumento uma
vari�vel do tipo tRetangulo e retorne, atrav�s de dois ponteiros para float
passados como argumento, a �rea e o per�metro de um ret�ngulo considerando
os valores contidos na estrutura. A assinatura da funcao pode ser:

void calculaRetangulo(tRetangulo r, float *area, float *perimetro);
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float base;
	float altura;
} tRetangulo;

void calculaRetangulo(tRetangulo r, float *area, float *perimetro) {
	
	*area = r.altura *r.base;
	*perimetro = ( r.altura * 2) + ( r.base * 2);
}

int main () {
	
	float retangulo_area, retangulo_perimetro;
	tRetangulo retangulo;
	
	retangulo.altura = 10;
	retangulo.base = 30;
	
	calculaRetangulo ( retangulo, &retangulo_area, &retangulo_perimetro);
	
	printf ("area do retangulo: %.2f\n", retangulo_area);
	printf ("perimetro do retangulo: %.2f\n", retangulo_perimetro);
	
	return 0;
}
