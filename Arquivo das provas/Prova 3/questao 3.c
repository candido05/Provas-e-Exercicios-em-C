/*
3) (2,5 + 1 pontos) Faça um programa em C que tenha um array com dados de 5 
livros. Os dados deverão estar em uma estrutura contendo: título (string com 
30 caracteres), autor (string com 15 caracteres) e ano (int). Implemente três
funções que realizem a busca de livros por título, por autor e por ano. Peça
ao usuário os dados de 5 livros e depois exiba um menu onde pode-se fazer
cada uma das buscas implementadas em funções, além da opção de fechar o 
programa. 

(+ 1 ponto): faça o programa perguntar quantos livros serão armazenados no
array e reserve o espaço de memória dinamicamente, solicitando os dados de 
acordo com a quantidade estabelecida. 
*/

#include <stdio.h>
#include <stdlib.h>

//definindo o tamanho do array, 5 para os 5 livros que serão lidos.
#define array 5

//strct para os tipos de variaveis
struct informacoes{
	
	char autor[15];
	char titulo[30];
	int ano;
	
}dados[array];


int main () {
	
	int i, resposta;
 	
	//definindo as funções das quias estão declaradas no final da função main.
	void buscar_ano ();
	void buscar_autor ();
	void buscar_titulo ();
	
	do {
	
	//menu dentro de um " do while" para a sua leitura até ser diferente de 5, 
	//pois 5 é a opção de saida.
	printf ("\n---MENU---\n\n");
	printf ("1 - cadastrar os livros\n");
	printf ("2 - busca de livros por título\n");
	printf ("3 - busca de livros por autor\n");
	printf ("4 - busca de livros por ano de lancamento\n");
	printf ("5 - SAIR");
	
	printf ("\n---------------------------------------------------------------------------------\n");
	
	//lendo o que o usuario escolheru de acordo com o menu
	printf ("digite um numero da tabela de menu:  ");
	scanf ("%d", &resposta);
	system("cls");
	
	if ( resposta == 1) {
			printf ("\ncadastro dos livros: \n\n");
					
			//leitura das dados 			
			for (i = 0; i < array; i++) {
				
				printf ("digite o nome do titulo do livro %d:  ", i + 1);
				scanf ("%s", dados[i].titulo);
				fflush (stdin);
				printf("\n");
				printf ("digite o nome do autor %d:  ", i + 1);
				scanf("%s", dados[i].autor);
				fflush (stdin);
				printf ("\n");
				printf ("digite o ano de lancamento do livro %d:  ", i + 1);
				scanf ("%d", &dados[i].ano);
				printf ("\n");
				printf ("\n---------------------\n");
				fflush (stdin);	
				
				system("cls");
				}
		}
	
	switch (resposta) {
		    
		case 2 :
				//busca do livro pelo seu titulo
			 buscar_titulo ();
			 
			break;
	
		case 3: 
			//busca do livro pelo nome do autor
			 buscar_autor ();
			 
			break;
			
		case 4:
			//busca do livro pelo ano de publicacao
			 buscar_ano ();
			break;	
	
		case 5: 
			//saida com um "limpar tela"
			system("cls");
			break;
			
		default:
			  printf ("OPCAO INVALIDA\n");
			break;
	}
	
	}  while (resposta != 5);

	return 0;
}

void buscar_titulo () {
	
		struct dados;
		char *resposta_titulo[30]; 
		int i;        
		
		//realizando a busca do livro pelo titulo atraves de um ponteiro que ira conter o nome do titulo 
		//digitado pelo usuario, o qual dentro do "if" sera comparado com o nome digitado anteriomente no
		//cadastro e sua exibicao.
		printf ("\nfazendo a busca do livro pelo titulo: \n");
			printf ("\ndigite o tituloo do livro:  ");
			scanf ("%s", &resposta_titulo);
			fflush (stdin);
			printf ("\n");
					
				for ( i = 0; i <array; i++) {
				if ( strcmp(resposta_titulo, dados[i].titulo) == 0) {
					printf ("NOME DO LIVRO: %s \n", dados[i].titulo);
					printf ("nome do autor: %s \n", dados[i].autor);
					printf ("ano de lancamento: %d \n\n", dados[i].ano);
					}
			} 
}

void buscar_ano () {

	
		struct dados;
		int resposta_ano;  
		int i;
		       
		//realizando a busca do livro pelo ano de lancamento atraves de uma variavel que ira conter o ano 
		//digitado pelo usuario, o qual dentro do "if" sera comparado com o ano de lancamento digitado anteriomente no
		//cadastro e sua exibicao.
		printf ("\nfazendo a busca do livro pelo ano de lancamento: \n");
			printf ("\ndigite o ano de lancamento do livro:  ");
			scanf ("%d", &resposta_ano);
			fflush (stdin);
			printf ("\n");
				for ( i = 0; i < array; i++) {
				if ( resposta_ano == dados[i].ano) {
					printf ("ANO DE LANCAMENTO DO LIVRO: %d \n", dados[i].ano);
					printf ("nome do autor: %s \n", dados[i].autor);
					printf ("nome do titulo: %s \n\n", dados[i].titulo);
					}
		}
}	

void buscar_autor () {
	
		struct dados;
		char *resposta_autor[15];  
		int i;        
	
		//realizando a busca do livro pelo titulo atraves de um ponteiro que ira conter o nome do autor
		//digitado pelo usuario, o qual dentro do "if" sera comparado com o nome digitado anteriomente no
		//cadastro e sua exibicao.	
		printf ("\nfazendo a busca do livro pelo autor: \n");
			printf ("\ndigite o nome do autor:  ");
				scanf("%s", &resposta_autor);
				fflush (stdin);

				for ( i = 0; i < array; i++) {
				if ( strcmp(resposta_autor, dados[i].autor) == 0) {
					printf ("\nNOME DO ALTOR: %s \n", dados[i].autor);
					printf ("nome do titulo: %s \n", dados[i].titulo);
					printf ("ano de lancamento: %d \n\n", dados[i].ano);
					}
			
		}
	}
