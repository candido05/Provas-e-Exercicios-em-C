/*
Astolfolov Oliveirescu é técnico de um time da série C do poderoso campeonato
de futebol profissional da Albânia. Ele deseja manter os dados dos seus jogadores
guardados de forma minuciosa. Ajude-o fazendo um programa para armazenar
os seguintes dados de cada jogador: nº da camisa, peso (kg), altura (m) e a posição
em que joga (atacante, defensor ou meio campista). Lembre-se que o time tem 22
jogadores, entre reservas e titulares. Leia os dados e depois gere um relatório no
vídeo, devidamente tabulado/formatado.
*/

#include <stdio.h>
#include <stdlib.h>

struct tipo_dados_time {
	
	int numero_camisa;
	float altura;
	float peso;
	char posicao[20];
	
} time[22];

int main () {
	
	int i;
	
	printf ("digite os dados abaixo: \n");
	printf ("\n----------------------------\n");
	printf ("\n");
	
	for ( i = 0; i < 5; i++) {
		
		printf ("digite o numero da camisa:  ");
		scanf ("%d", &time[i].numero_camisa);
		
		printf ("\n");		
		
		printf ("digite a altura do jogador:  ");
		scanf ("%f", &time[i].altura);
		
		printf ("\n");
		
		printf ("digite o peso do jogador:  ");
		scanf ("%f%*c", &time[i].peso);
		
		printf ("\n");
		
		printf ("digite a posicao do jogador:  ");
		fgets (time[i].posicao, 20, stdin);
		
		printf ("\n");
		printf ("\n----------------------------\n");
	}

	printf ("relatorio: \n");
	
	for ( i = 0; i < 22; i++) {
		
		printf ("CAMISA numero: ( -- %d -- ) PESO ( -- %f -- ) ALTURA ( -- %f -- ) POSICAO ( -- %s -- )\n\n", 
		 time[i].numero_camisa, time[i].peso, time[i].altura, time[i].posicao);
		
		
	}
	
	
	
	return 0;
}
