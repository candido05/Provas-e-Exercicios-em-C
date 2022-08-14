/*
Fa�a um programa que leia o raio de um circulo e imprima o per�metro e a �rea.
Para fazer os c�lculos, implemente duas fun��es, cada uma deve realizar um
c�lculo especifico conforme solicitado. Utilize as f�rmulas a seguir.
*/

#include <stdio.h>
#include <stdlib.h>

float perimetro ( int raio ) {
	
	return 2 * 3.14 * raio;
}

float area ( int raio ) {
	
	return 3.14 * raio * raio;
}

int main () {
	
	float raio, Perimetro, Area;
	
	printf ("digite o valor do raio: ");
	scanf ("%f", &raio);
	
	Perimetro = perimetro(raio);
	Area = area(raio);
	
	printf ("\n\n");
	printf ("o valor da area eh: %2.f", Area);
	printf ("\n");
	printf ("o valor do perimetro eh: %2.f", Perimetro);
	
	return 0;
}
