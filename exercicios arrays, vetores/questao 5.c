/*

Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule
e armazene a média arredondada. Armazene também a situação do aluno: 1-
Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem
contendo as notas, a média e a situação de cada aluno em formato tabulado.
Utilize quantos vetores forem necessários para armazenar os dados.

*/

#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int i, situacoes[15];
	float notasp1[15], notasp2[15], media[15];
	
	for ( i = 0; i < 15; i++) {
	
       printf ("digite a nota 1 aluno ( %d ): \n", i +1);	
	   scanf ("%f", &notasp1[i]);
	   printf ("digite a nota 2 aluno ( %d ): \n", i +1);
	   scanf ("%f", &notasp2[i]);
	
	   media[i] = (notasp1[i] + notasp2[i]) / 2;
	   
	   if (media[i] >= 7) {
	   	situacoes[i] = 1;
		   
		} else {
			
	   	 situacoes[i] = 2;
	   }
	
    }
	
	printf ("\n lista dos alunos\n");
	printf ("nota 1 \t\t\t nota 2 \t\t\t media \t\t situacao \n");
	for ( i = 0; i < 15; i++) {
	    printf ("aluno ( %d ) %2.f \t", i +1, notasp1[i]);
	    printf ("aluno ( %d ) %2.f \t", i +1, notasp2[i]);
	    printf ("aluno ( %d ) %2.f \t", i +1, media[i]);
	
	    if (situacoes[i] == 1) 
	       printf ("aprovado\n");
	    else
		   printf ("reprovado\n");   
    }
   return 0;
}
