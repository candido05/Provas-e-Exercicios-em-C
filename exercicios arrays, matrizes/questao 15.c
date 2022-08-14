/*A matriz dados contém na 1ª coluna a matrícula do aluno; na 2ª, o sexo (0 para
feminino e 1 para masculino); na 3ª, o código do curso, e na 4ª, o CR (coeficiente
de rendimento).
Faça um programa que armazene esses dados sabendo-se que o código do curso
é uma parte da matrícula: aascccnnn (aa ano, s semestre, ccc código do curso e
nnn matrícula no curso).
Além disso, um grupo empresarial resolveu premiar a aluna com CR mais alto de
um curso cujo código deverá ser digitado. Suponha 10 alunos e que o CR é um nº
inteiro.
*/

#include <stdio.h>
#include <stdlib.h>

int main () { 

   int dados[10][4], i, curso, cr_maior = 0, i_maior;

   for ( i = 0; i < 10; i++) {
   	
   	printf ("informe os dados do aluno: %d \n", i + 1);
   	
   	printf ("\n---\n");
   	printf ("\n---\n\n");
   	
   	printf ("informe a matricula: \n");
   	scanf ("%d", &dados[i][0]);
   	
    printf ("\n-------------------------------------\n");
    
    printf ("informe o sexo do aluno ( -- 0 -> FEMININO -- 1 -> MASCULINO): \n");
    scanf ("%d", &dados[i][1]);
    
    printf ("\n-------------------------------------\n");
    
    printf ("informe o codigo do curso: \n");
    scanf ("%d", &dados[i][2]);
    
    printf ("\n-------------------------------------\n");
    
    printf ("informe o CR: \n");
    scanf ("%d", &dados[i][3]);
    
    printf ("\n-------------------------------------\n");
    
   }
  
    printf ("informe o codigo do curso para a premiacao: \n");
    scanf ("%d", &curso);
    
    printf ("\n-------------------------------------\n");
    
    for ( i = 0; i < 10; i++) {
    	if (dados[i][2] == curso) {
    		if ( dados[i][3] > cr_maior && dados[i][1] == 0 || 1) {
    			cr_maior = dados[i][3];
    			i_maior = i;
			}
		}
	}

    printf ("\n");
    
    printf ("o aluno premiado foi o de matricula ( -- %d -- ) no curso de codigo ( -- %d -- ) com o CR ( -- %d -- )", dados[i_maior][0], dados[i_maior][2], dados[i_maior][3]);



   return 0;
}
