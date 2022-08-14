/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho
*/

#include <stdlib.h>
#include <stdio.h>

struct atleta {
	
	char nome[30];
	char esporte[30];
	int idade;
	float altura;
	
};

typedef struct atleta Atleta;

int main () {
	
	Atleta atletas[5];
	int atleta_velho = 0, i, i_velho, i_alto;
	float atleta_alto;
	
	for ( i = 0; i < 5; i++) {
		
	printf ("informe o nome: \n");
	scanf ("%s", &atletas[i].nome);		
	printf ("\n------------------------\n");	
		
	printf ("informe o esporte: \n");
	scanf ("%s", &atletas[i].esporte);	
	printf ("\n------------------------\n");	
		
	printf ("informe a idade: \n");	
	scanf ("%d", &atletas[i].idade);	
	printf ("\n------------------------\n");	
		
	printf ("informe a altura: \n");	
	scanf ("%f", &atletas[i].altura);	
	printf ("\n------------------------\n");	
		
		
		if ( atletas[i].idade > atleta_velho) {
			
			i_velho = i;
			atleta_velho = atletas[i].idade;
			
		}
		
		if ( atletas[i].altura > atleta_alto) {
			
			i_alto = i;
			atleta_alto = atletas[i].altura;
		}	
		
	}
	
	printf ("\n\n");
	printf ("atleta mais velho eh ( -- %s -- ) com ( -- %d -- ) anos\n", atletas[i_velho].nome, atletas[i_velho].idade);
	
	printf ("\n----------------------------------------------------------\n");

	printf ("atleta mais velho eh ( -- %s -- ) com ( -- %2.f -- ) metros", atletas[i_alto].nome, atletas[i_alto].altura);


	

	return 0;
}
