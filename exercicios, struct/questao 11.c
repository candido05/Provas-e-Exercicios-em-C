/*
Escreva um programa que contenha uma estrutura representando uma data
válida. Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia
duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que
decorrem entre as duas datas
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct data {
	
	int dia;
	int mes;
	int ano;
	
} Data;
 
int main () {
	
	Data data_1, data_2;
	int dias;
	
	printf ("informe a primeira data: \n");
	
	printf ("dia:  ");
	scanf ("%d",&data_1.dia);
	printf ("\n");
	printf ("mes:  ");
	scanf ("%d",&data_1.mes);
	printf ("\n");
	printf ("ano:  ");
	scanf ("%d",&data_1.ano);
	printf ("\n");
	
	printf ("\n----------------------------\n");
	
	printf ("informe a segunda data: \n");
	
	printf ("dia:  ");
	scanf ("%d",&data_2.dia);
	printf ("\n");
	printf ("mes:  ");
	scanf ("%d",&data_2.mes);
	printf ("\n");
	printf ("ano:  ");
	scanf ("%d",&data_2.ano);
	printf ("\n");
	
	printf ("\n----------------------------\n");
	
	dias = ( data_2.ano - data_1.ano - 1) * 365;
	dias += (( 12 * data_1.mes ) * 30 ) + (data_2.mes * 30);
	dias += data_1.dia + data_2.dia;
	
	printf ("total de dias: %d", dias);
	
	return 0;
}
