/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Faça uso de estruturas aninhadas e definição de novo tipo de dado. Agora,
escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes
da pessoa mais nova e da mais velha.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct data_nascimento {
	
	int dia;
	int mes;
	int ano;
	
} Data_Nascimento;

typedef struct pessoa{
	
	char nome[30];
	Data_Nascimento nascimento;
	
} Pessoa;

int main () {
	
	Pessoa pessoas[6];
	Data_Nascimento nascimento_maior, nascimento_menor;
	nascimento_maior.ano = 0;
	nascimento_menor.ano = 0;
	int i, i_maior, i_menor;
	
	for ( i = 0; i < 6; i++) {
		
		printf ("informe o nome: \n");
		scanf ("%s", &pessoas[i].nome);
		printf ("\n------------------------------------\n");
		printf ("informe a data de nascimento: \n");
		scanf ("%d", &pessoas[i].nascimento.dia);
		scanf ("%d", &pessoas[i].nascimento.mes);
		scanf ("%d", &pessoas[i].nascimento.ano);
		printf ("\n------------------------------------\n");	
	
	
	if ((pessoas[i].nascimento.ano < nascimento_menor.ano || i == 0) ||
	    (pessoas[i].nascimento.ano == nascimento_menor.ano &&
	    pessoas[i].nascimento.mes < nascimento_menor.mes) ||
	    (pessoas[i].nascimento.ano == nascimento_menor.ano &&
	    pessoas[i].nascimento.mes == nascimento_menor.mes &&
	    pessoas[i].nascimento.dia < nascimento_menor.dia)) { 
	    
	    i_menor = i;
	    nascimento_menor.dia = pessoas[i].nascimento.dia;
		nascimento_menor.mes = pessoas[i].nascimento.mes;
		nascimento_menor.ano = pessoas[i].nascimento.ano;   
	    
	}
	
	if ((pessoas[i].nascimento.ano > nascimento_maior.ano) ||
	    (pessoas[i].nascimento.ano == nascimento_maior.ano &&
	    pessoas[i].nascimento.mes > nascimento_maior.mes) ||
	    (pessoas[i].nascimento.ano == nascimento_maior.ano &&
	    pessoas[i].nascimento.mes == nascimento_maior.mes &&
	    pessoas[i].nascimento.dia > nascimento_maior.dia)) {
	    		
		i_maior = i;
		nascimento_maior.dia = pessoas[i].nascimento.dia;
		nascimento_maior.mes = pessoas[i].nascimento.mes;
		nascimento_maior.ano = pessoas[i].nascimento.ano;
	    	
   }
	
}	
	
	printf ("pessoa mais velha: nome ( -- %s -- ) data de nascimento ( -- %d - %d - %d -- ) ",
	 pessoas[i_menor].nome, pessoas[i_menor].nascimento.dia, pessoas[i_menor].nascimento.mes, pessoas[i_menor].nascimento.ano);
	
	printf ("\n\n");        
	printf ("\n-----------------------------------------------------------------------------\n"); 
	printf ("\n-----------------------------------------------------------------------------\n");      
	
	printf ("pessoa mais nova: nome ( -- %s -- ) data de nascimento ( -- %d - %d - %d -- ) ",
	 pessoas[i_maior].nome, pessoas[i_maior].nascimento.dia, pessoas[i_maior].nascimento.mes, pessoas[i_maior].nascimento.ano);
	 
	
	return 0;
}
