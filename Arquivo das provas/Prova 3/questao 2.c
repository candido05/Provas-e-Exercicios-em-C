/*
2) (2,5 + 1 pontos) Faça um programa em C que contenha estruturas para
armazenar novos tipos de dados de acordo com as informações abaixo:

	- Horário: hora, minutos e segundos, variáveis inteiras;
	- Data: dia, mês e ano, variáveis inteiras;
	- Compromisso: composto por uma string de 50 caracteres,
			Horário e Data;

Declare as estruturas e faça o programa solicitar informações ao usuário
para cadastrar 3 instâncias (3 compromissos), armazenando-os em um array;
exiba o conteúdo dos três compromissos. Finalmente, leia dois inteiros M e A e
mostre todos os compromissos do mês M do ano A.

(+1 ponto): faça o programa perguntar quantos compromissos o usuário quer
cadastrar e reserve o espaço de memória para o array dinamicamente, solicitando
os dados para a quantidade de compromissos definida, e exibindo todos eles em
seguida.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, m, a, array;
	
	//pedindo ao usuario determinar quantos compromissos tem
	printf ("declare a quantidade de compromissos:  ");
	scanf ("%d", &array);
	printf ("\n");
	
	//strctc contendo as variaveus
	struct instancia {
    
    int dia;
	int mes;
	int ano;
	int	minutos;
	int	hora;
	int	segundo;
	char descricao[50];
	
	}compromisso[array];
	
	//realizando o cadastro dos compromissoas atraves de um laco "for"
	printf ("cadastre os compromissos:  \n\n");
	
	for ( i = 0; i < array; i++){
		
		printf ("compromisso %d, digite as horas, a data e a descricao:  \n", i + 1);
		
		printf ("\nhora:  ");
		scanf ("%d%*c", &compromisso[i].hora);
		printf ("\n");
		printf ("minutos:  ");
		scanf ("%d%*c", &compromisso[i].minutos);
		printf ("\n");
		printf ("segundos:  ");
		scanf ("%d%*c", &compromisso[i].segundo);
		printf ("\n");
		
		printf ("\n");
		
		printf ("dia:  ");
		scanf ("%d%*c", &compromisso[i].dia);
		printf ("\n");
		printf ("mes:  ");
		scanf ("%d%*c", &compromisso[i].mes);
		printf ("\n");
		printf ("ano:  ");
		scanf ("%d%*c", &compromisso[i].ano);
		printf ("\n");
		
		printf ("\n");
		
		printf ("descricao do compromisso:  ");
		fgets(compromisso[i].descricao, 50, stdin);
		printf ("\n");
		
		printf ("\n--------------------------------------------\n");
	}

	//agora exibindo o conteudo dos dados coletados anteriomente
	printf ("exibindo o conteudo dos compromissos:  \n");
	printf ("\n");

	for ( i = 0; i < array; i++) {
		
		printf ("compromisso %d : \n", i + 1);
		
		printf ("hora : minutos : segundos ---  %d : %d : %d", 
		compromisso[i].hora, compromisso[i].minutos, compromisso[i].segundo);
		printf ("\n");
		
		printf ("dia / mes / ano ---- %d / %d / %d", compromisso[i].dia,
		compromisso[i].mes, compromisso[i].ano);
		printf ("\n");
		
		printf ("descricao:  %s", compromisso[i].descricao);
		printf ("\n");
		
		printf ("\n--------------------------------------------\n");
	}

	// Finalmente, lendo dois inteiros M e A para mostrar todos os compromissos do mês M do ano A.
	printf ("\nagora digite o numero de algum mes e ano para saber quias os compromissos do mes no respectivo ano:  \n");
	printf ("o mes: ");
	scanf ("%d%*c", &m);
	printf ("\n");
	printf ("o ano: ");
	scanf ("%d%*c", &a);
	printf ("\n");
	
	for ( i = 0; i < array; i++) {
		
		//mostrando os compromissos nos respectivos mes e ano digitado pelo usuario
	if ( m == compromisso[i].mes && a == compromisso[i].ano) {
		
		printf ("dia / mes / ano ---- %d / %d / %d", compromisso[i].dia,
		compromisso[i].mes, compromisso[i].ano);
		printf ("\n");
	}
	
	}

	return 0;
}
