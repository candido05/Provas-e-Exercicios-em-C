/*
4) Considere o tipo de dado tPessoa definido abaixo:
typedef struct {
	int dia, mes, ano;
} tData;

typedef struct {
	int matricula;
	tData dataNascimento;
	float altura;
} tPessoa;

Escreva um programa em C que receba um valor n (int) de entrada e, em seguida:
- aloque espaço dinamicamente na memoria para criar um vetor de tPessoa de n
elementos e verifique se o espaço foi alocado com sucesso
- preencha o vetor criado com n valores digitados pelo usuario
- exiba o vetor preenchido na tela e a média de alturas dos itens tPessoa
- libere o espaço de memoria alocado
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dia, mes, ano;
} tData;

typedef struct {
	int matricula;
	tData dataNascimento;
	float altura;
} tPessoa;

int main () {
	
	int n, i;
	tPessoa *array_pessoa;
	float soma, media;
	
	printf ("digote a quantidade de pessoas:  ");
	scanf ("%d", &n);
	printf ("\n");
	
	array_pessoa = (tPessoa*) malloc( n * sizeof(tPessoa));
	
	for ( i = 0; i < n; i++) {
		
		printf("digite a matricula da pessoa:  ");
		scanf("%d", &array_pessoa[i].matricula);
		printf("\n\n");
		
		printf("digite a data de nascimento:  \n\n");
		printf ("dia:  ");
		scanf("%d", &array_pessoa[i].dataNascimento.dia);
		printf("\n");
		printf ("mes:  ");
		scanf("%d", &array_pessoa[i].dataNascimento.mes);
		printf("\n");
		printf ("ano:  ");
		scanf("%d", &array_pessoa[i].dataNascimento.ano);
		printf("\n\n");
		
		printf ("digite a altura:  ");
		scanf ("%f", &array_pessoa[i].altura);
		printf ("\n");
	}
	
	printf ("\n--------------------------\n");
	
	for ( i = 0; i < n; i++) {
		
		printf ("pessoa %d\n", i + 1);
		printf ("matricula: %d\n", array_pessoa[i].matricula);
		printf ("data de nascimento: %d | %d | %d\n", array_pessoa[i].dataNascimento.dia, 
		array_pessoa[i].dataNascimento.mes, array_pessoa[i].dataNascimento.ano);
		printf ("altura: %f metros\n", array_pessoa[i].altura);
		printf ("\n--------------------------\n");	
	}
	
	printf ("\n\n");
	
	for ( i = 0; i < n; i++) {
		
		soma += array_pessoa[i].altura;
	}
	
	media = soma/n;
	
	printf ("a media das alturas eh: %.2f metros.", media);
	
	free(array_pessoa);
	return 0;
}
