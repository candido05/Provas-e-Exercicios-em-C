//6) (2 + 1 pontos) Faça um programa em C que solicite ao usuário o nome (string)
//e a média (float) para cinco alunos representados no programa. Exiba 
//posteriormente qual o aluno com a menor e maior média e qual a média geral da
//turma. Bônus: use structs e ganhe +1 ponto 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct aluno {   //realizando o structs

    char nome[30]; //atribuindo as variaveis da struct
    float media;
 };

 typedef struct aluno Aluno;

int main() {
 
    Aluno alunos[5]; //atribuindo as variaveis da escopo
    int i, iMaior=0;
    float media, maiorMedia=0;

    for (i=0; i<5; i++) { //colocando uma laço "for" para haver a contagem do "i" e assim poder 
                          //ter a maior media do aluno.
    	     
        printf("Informe o nome do aluno: \n"); 
        scanf("%s", &alunos[i].nome);
 
        printf("Informe a media do aluno: \n");
        scanf("%f", &alunos[i].media);
        
            if (media < maiorMedia) { //fazendo um "if" para gerar a mior media e o aluno de maior media
                maiorMedia = media;
                iMaior = i;
            }
   }
     //expondo o aluno e sua maior media.
   printf("Nome do aluno com a maior media %s \n", alunos[iMaior].nome); 
   printf("Medio do aluno de maior media %f \n", alunos[iMaior].media);
 
 return 0;
 
 
 }
