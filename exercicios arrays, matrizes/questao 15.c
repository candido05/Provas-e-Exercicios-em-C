/*A matriz dados cont�m na 1� coluna a matr�cula do aluno; na 2�, o sexo (0 para
feminino e 1 para masculino); na 3�, o c�digo do curso, e na 4�, o CR (coeficiente
de rendimento).
Fa�a um programa que armazene esses dados sabendo-se que o c�digo do curso
� uma parte da matr�cula: aascccnnn (aa ano, s semestre, ccc c�digo do curso e
nnn matr�cula no curso).
Al�m disso, um grupo empresarial resolveu premiar a aluna com CR mais alto de
um curso cujo c�digo dever� ser digitado. Suponha 10 alunos e que o CR � um n�
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
