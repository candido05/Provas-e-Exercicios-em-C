/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Defina também um tipo para esta estrutura. Agora, escreva um programa que
leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o
nome e as notas do aluno que possui a maior média geral dentre os cinco.
*/

#include <stdio.h>
#include <stdlib.h>

struct aluno {
	
	int matricula;
	char nome[30];
	float p1, p2, p3;
	
};

typedef struct aluno Aluno;

int main () {

	Aluno alunos [5];
	int i, i_maior = 0;
	float media, maior_media;
	
	for ( i = 0; i < 5; i++) {
		printf ("informe a matricula do aluno: \n");
		scanf ("%d", &alunos[i].matricula);
		printf ("\n--------------------------------------------\n");	
		printf ("informe o nome do aluno: \n");
		scanf ("%s", &alunos[i].nome);
		printf ("\n--------------------------------------------\n");	
		printf ("informe a nota P1: \n");
		scanf ("%f", &alunos[i].p1);
		printf ("\n--------------------------------------------\n");
		printf ("informe a nota P2: \n");
		scanf ("%f", &alunos[i].p2);
		printf ("\n--------------------------------------------\n");
		printf ("informe a nota P3: \n");
		scanf ("%f", &alunos[i].p3);
		printf ("\n--------------------------------------------\n");	
		
		media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;
		
		if ( media > maior_media) {
			maior_media = media;
			i_maior = i;
		}
	}
	
	printf ("\n\n");
	
	printf ("aluno com a maior media: \n");
	printf ("aluno de matricula -- %d -- de nome -- %s --- com notas ( - %2.f - %2.f - %2.f -) tem a media -- %2.f --", alunos[i_maior].matricula, 
	alunos[i_maior].nome, alunos[i_maior].p1, alunos[i_maior].p2, alunos[i_maior].p3, maior_media);
	
	return 0;
}
