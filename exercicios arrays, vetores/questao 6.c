/*

Construa um programa que permita armazenar o sal�rio de 20 pessoas. Calcular
e armazenar o novo sal�rio sabendo-se que o reajuste foi de 8%. Imprimir uma
listagem numerada com o sal�rio e o novo sal�rio. Declare quantos vetores forem
necess�rios

*/

#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int i;
	float salarios[20], salario_reajustado[20];
	
	for ( i = 0; i < 20; i++) {
		printf ("digite o salario do trabalhador ( %d ): \n", i + 1);
		scanf ("%f", &salarios[i]);
		salario_reajustado[i] = salarios[i] + salarios[i] * 0.08;
	}
	
	for ( i = 0; i < 20; i++) {
	
	printf ("\ntrabalhador numero: ( %d ) ---  salario: %3.f --- salario reajustado: %3.f\n", i +1, salarios[i], salario_reajustado[i]);
	

    }
    return 0;
}
