//4) (2 pontos) Fa�a um programa em C que solicite ao usu�rio uma palavra 
//(string) e depois altere a palavra para que todas as vogais mai�sculas sejam
//substitu�das por vogais min�sculas e vice-versa. Exiba a string resultante e
//quantas vogais foram alteradas. Explique nos coment�rios todas as etapas.

#include <stdio.h>
#include <string.h>


int main() {
  int strch;      //determinando uma variavel do tipo char para "frase" e determinando                 
  char frase[30];  // strch como int para validar o la�o for de repeti��a o qual somado
                   //com o switch case faz a troca das vogais.
  

        printf("entre com a frase (max 30 caracteres) para o tamanho das vogais seja trocado: \n");
        gets(frase); //determinado a frase que ser� trocada o tamanho das vogais.
         
		 //fazendo o la�o "for" que reperiarar da caractere da frase e trocar apenas as vogais no switch
		for (strch =0 ; frase[strch] != '\0'; strch++) {
		

        switch(frase[strch]) {
        	
        case 'a':
            frase[strch] = 'A';   
            break;
        case 'e':
            frase[strch] = 'E';   
            break;
        case 'i':
            frase[strch] = 'I';   
            break;
		case 'o':
            frase[strch] = 'O';   
            break;
		case 'u':
            frase[strch] = 'U';   
            break;
		case 'A':
            frase[strch] = 'a';   
            break;
		case 'E':
            frase[strch] = 'e';   
            break;  
        case 'I':
            frase[strch] = 'i';   
            break;  
        case 'O':
            frase[strch] = 'o';   
            break;  
        case 'U':
            frase[strch] = 'u';   
            break;       
            
        }
       
	}    //exibindo a nova frase.
        printf("a nova frase com o tamanho das vogais trocado eh: %s\n", frase);
        return 0;
}
