/*
Faça um programa que leia a matrícula e a média de 100 alunos. Ordene da maior
para a menor nota e imprima uma relação contendo todas as matrículas e médias
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matricula[10], i, j, auxiliar_matricula;
	float media[10], auxiliar_media;
	
	for ( i = 0; i < 10; i++) {
		
		printf ("digite o numero da matricula: ");
		scanf ("%d", &matricula[i]);
		printf ("\n     \n");
		printf ("digite a media: ");
		scanf ("%f", &media[i]);
		printf ("\n----------------------------\n");
	}
	
	//ordenando os dados
	for ( i = 0; i < 10 - 1; i++) {
		for ( j = i + 1; j < 10; j++) {
			if ( media[i] < media[j]) {
				auxiliar_media = media[i];
				media[i] = media[j];
				media[j] = auxiliar_media;
				auxiliar_matricula = matricula[i];
				matricula[i] = matricula[j];
				matricula[j] = auxiliar_matricula;
			}
		}
	}
	
	printf ("\n\n");
	printf ("alunos com as medias e as matriculas em ordem decrecente: \n");
	printf ("----------------------------------------------------------\n");
	printf ("\n\n");
	
	for ( i = 0; i < 10; i++) {
		printf ("----------------------------------------------------------\n");
		printf (" aluno ( %d ) de matrcula -- ( %2.d ) -- tem media -- ( %2.f ) -- \n", i + 1, matricula[i], media[i]);
		printf ("\n");
	}
	
	}
