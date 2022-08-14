/*
Um clube social com 37 associados deseja que você faça um programa para
armazenar os dados cadastrais desses associados. Os dados são: nome, dia, mês
e ano de nascimento, valor da mensalidade e quantidade de dependentes. O
programa deverá ler os dados e imprimir depois na tela. Deverá também informar
o associado (ou os associados) com o maior número de dependentes.
*/

#include <stdio.h>
#include <stdlib.h>

struct tipo_data {
	
	int dia;
	int mes;
	int ano

};

struct tipo_dado_associado {
	
	int nome[30];
	struct tipo_data nascimento;
	float mensalidade;
	int dependentes;
	
} clube[3];

int main () {
	
	int i, associados, auxiliar;
	
	for ( i = 0; i < 3; i++) {
		
		printf ("informe o nome:  ");
		gets (clube[i].nome);
		
		printf ("\n");	
		
		printf ("informe a data de nascimento: \n");
		printf ("dia:  ");
		scanf ("%d", &clube[i].nascimento.dia);
		
		printf ("\n");
	
		printf ("mes:  ");
		scanf ("%d", &clube[i].nascimento.mes);
	
		printf ("\n");
		
		printf ("ano:  ");
		scanf ("%d", &clube[i].nascimento.ano);
		
		printf ("\n");
		
		printf ("informe o valor da mensalidade:  ");
		scanf ("%f", &clube[i].mensalidade);
		
		printf ("\n");
		
		printf ("informe o numero de dependentes:  ");
		scanf ("%d%*c", &clube[i].dependentes);
		
		printf ("\n");
		printf ("\n----------------------------------\n");
		
	}
	
	
	auxiliar = clube[0].dependentes;
	associados = 0;
	
	for ( i = 0; i < 3; i++) {
		
		if ( auxiliar <= clube[i].dependentes) {
			auxiliar = clube[i].dependentes;
			associados = i;
		}
		
		if ( auxiliar >= clube[i].dependentes) {
			auxiliar = auxiliar;
			associados = associados;
		}
		
	}
	
	for ( i = 0; i< 3; i++) {
		
		printf ("nome ( -- %s -- ) data de nascimento ( -- %d - %d - %d -- ) mensalidade ( -- %2.f -- ) dependentes ( -- %d -- )\n\n\n",
		 clube[i].nome, clube[i].nascimento.dia, clube[i].nascimento.mes, clube[i].nascimento.ano, clube[i].mensalidade, clube[i].dependentes);
	
	}
	
	printf ("\n");
	printf ("\n----------------------------------\n");
	
	printf ("associado com o maior numero de dependentes eh ( -- %s -- ) com ( -- %d -- ) dependentes\n", clube[associados].nome, 
	    clube[associados].dependentes);
	
	return 0;
}
