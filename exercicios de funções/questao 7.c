/*
Fa�a um programa que leia a base e a altura de um ret�ngulo e imprima o per�metro, a �rea e a diagonal. 
Para fazer os c�lculos, implemente tr�s fun��es, cada uma deve realizar um c�lculo especifico conforme 
solicitado. Utilize as f�rmulas a seguir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetro ( int base, int altura ) {
	
	return 2 * (base + altura);
}

float area ( int base, int altura) {
	
	return base * altura;
}

float diametro ( int base, int altura) {
	
	return sqrt( (base * base ) + ( altura * altura ) ); 
}

int main () {
	
	int base, altura;	
	float Area, Perimetro, Diagonal;
	char resposta; 
	
	printf ("digite ( A ) para calcular o valor da area, ( P ) para o perimetro ou ( D ) para a diagonal: ");
	scanf ("%c", &resposta);
	printf ("\n\n");
	
	switch (resposta) {
		
	case 'a' :
		
		printf ("\n");
		printf ("digite a base do retangulo: ");
		scanf ("%d", &base);
		printf ("\n");
		printf ("digite a altura do retangulo: ");
		scanf ("%d", &altura);
		
		Area = area ( base, altura);
		printf ("\n");
		printf ("o valor da area eh: %f", Area);
		
		break;
		
		
	case 'p' :
		
		printf ("\n");
		printf ("digite a base do retangulo: ");
		scanf ("%d", &base);
		printf ("\n");
		printf ("digite a altura do retangulo: ");
		scanf ("%d", &altura);
		
		Perimetro = perimetro ( base, altura);
		printf ("\n");
		printf ("o valor da area eh: %f", Perimetro);
		
		break;
	
		
	case 'd' :
		
		printf ("\n");
		printf ("digite a base do retangulo: ");
		scanf ("%d", &base);
		printf ("\n");
		printf ("digite a altura do retangulo: ");
		scanf ("%d", &altura);
		
		Diagonal =  diametro ( base, altura);
		printf ("\n");
		printf ("o valor da area eh: %2.f",  Diagonal);
		
		break;
	
		
	default	:
		
		printf ("\n OPCAO INVALIDA");
		break;

		
	}
	return 0;
}
