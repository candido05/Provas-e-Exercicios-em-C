/*
Faça um programa que receba as notas de três provas e calcule a média. Para o
cálculo, escreva uma função. O programa deve imprimir a média ao final
*/

#include <stdio.h>
#include <stdlib.h>

float calcula_media (float nota_1, float nota_2, float nota_3) {
	
	return ((nota_1 + nota_2 + nota_3) / 3);
}

int main () {
	
	float nota_1, nota_2, nota_3, media = 0;
	
	printf ("digite as 3 notas: \n");	
	printf ("\n-----------------------------\n");
	
	printf ("digite a 1 nota:  ");
	scanf ("%f", &nota_1);
	printf ("\n\n");
	
	printf ("digite a 2 nota:  ");
	scanf ("%f", &nota_2);
	printf ("\n\n");
	
	printf ("digite a 3 nota:  ");
	scanf ("%f", &nota_3);
	printf ("\n\n");
	
	media = calcula_media (nota_1, nota_2, nota_3);
	printf ("media final: %2.f", media);
	
	return 0;
}
