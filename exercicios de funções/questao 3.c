/*
Faça um programa em C que leia o valor de um ângulo em graus e o converta,
utilizando uma função, para radianos e ao final imprima o resultado. Veja a
fórmula de cálculo a seguir.

rad = ang × pi/180
*/

#include <stdio.h>
#include <stdlib.h>

float claculo_radiano ( int graus) {
	
	return ((graus * 3.14) / 180);
}

int main () {
	
	float angulo_graus, radianos = 0;
	
	printf ("digite o valor do angulo em graus: ");
	scanf ("%f", &angulo_graus);
	printf ("\n\n");
	
	radianos = claculo_radiano ( angulo_graus );
	printf ("angulo em radianos: %f", radianos);
	
	
	return 0;
}
