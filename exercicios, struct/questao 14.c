/*
Crie um programa que tenha uma estrutura para armazenar o nome, a idade e
número da carteira de sócio de 50 associados de um clube. Crie também uma estrutura, dentro desta anterior, chamada dados que contenha o endereço, telefone
e data de nascimento.
*/

#include <stdio.h>
#include <stdlib.h>

struct dados{
	
	char endereco[50];
	int telefone;
	char nascimento[12];
	
};

struct clube {
	
	int idade;
	char nome[30];
	int carteiras;
	struct dados data;
	
} clube[5];

int main () {
	
	int i;
	
	for ( i = 0; i < 3; i++) {
		
		printf ("digite o nome:  ");	
		gets (clube[i].nome);
		printf ("\n");
		
		printf ("digite a idade:  ");
		scanf ("%d", &clube[i].idade);
		printf ("\n");
		
		printf ("digite o numero da carteira de socio:  ");
		scanf ("%d%*c", &clube[i].carteiras);
		printf ("\n");
		
		printf ("digite o endereco:  ");
		gets (clube[i].data.endereco);
		printf ("\n");
		
		printf ("digite o telefone:  ");
		scanf ("%d%*c", &clube[i].data.telefone);
		printf ("\n");
		
		printf ("digite sua data de nascimento:  ");
		gets (clube[i].data.nascimento);
		printf ("\n");
	
	}
	
	printf ("REGISTRO DE SOCIO-TORCEDO DO CAMPINENSSE");
	printf ("\n");
	printf ("\n-----------------------------\n");	
	
	for ( i = 0; i < 3; i++) {
		
		printf ("nome: %s \n", clube[i].nome);	
		printf ("idade: %d \n", clube[i].idade);
		printf ("carteira %d \n", clube[i].carteiras);
		printf ("endereco: %d \n", clube[i].data.endereco);
		printf ("telefone: %d \n", clube[i].data.telefone);
		printf ("nascimento: %s \n", clube[i].data.nascimento);
		
		printf ("\n");
		printf ("\n--------------------------------\n");
		
	}
	
	return 0;
}
