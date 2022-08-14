/*
Usando a estrutura "atleta"do exercício anterior, escreva um programa que leia
os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o
mais novo.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct atleta {
	
	char nome[30];
	char esporte[30];
	int idade;
	float altura;
	
};

typedef struct atleta Atleta;

int main () {

	Atleta atletas[5], auxiliar;
	int i, j;

	for ( i = 0; i < 5; i++) {
		
		printf ("informe o nome: \n");
		scanf ("%s", &atletas[i].nome);
		printf ("\n----------------------\n");
		
		printf ("informe o esporte: \n");
		scanf ("%s", &atletas[i].esporte);
		printf ("\n----------------------\n");
		
		printf ("informe a idade: \n");
		scanf ("%d", &atletas[i].idade);
		printf ("\n----------------------\n");	
		
		printf ("informe a altura: \n");
		scanf ("%f", &atletas[i].altura);
		printf ("\n-----------------------------------------------------------\n")	
			
	}

	for ( i = 0; i < 5; i++) {
		for ( j = i + 1; j < 5; j++) {
			
			if ( atletas[i].idade < atletas[j].idade) {
				
				//salva na variavel auxiliar
				strcpy ( auxiliar.nome, atletas[i].nome );
				strcpy ( auxiliar.esporte, atletas[i].esporte) ;
				auxiliar.idade = atletas[i].idade;
				auxiliar.altura = atletas[i].altura;
				
				//trocando as posicoes
				strcpy ( atletas[i].nome, atletas[j].nome );
				strcpy ( atletas[i].esporte, atletas[j].esporte );
				atletas[i].idade = atletas[j].idade;
				atletas[i].altura = atletas[j].altura;
				
				strcpy ( atletas[j].nome, auxiliar.nome );
				strcpy ( atletas[j].esporte, auxiliar.esporte);
				atletas[j].idade = auxiliar.idade;
				atletas[j].altura = auxiliar.altura;
				
			}
			
		}
	}

	for ( j = 0; j < 5; j++) {
		
		printf ("exibino por ordem de idade, do mais velho para o mais novo.");
		printf ("\n-----------------------------------------------------------\n");
		
		printf ("\n\n");
		
		printf ("nome ( -- %s -- ) esporte ( -- %s -- ) idade ( -- %d -- ) altura ( -- %2.f -- )\n", atletas[j].nome, atletas[j].esporte, atletas[j].idade, atletas[j].altura);
		
		
	}

	return 0;
}
