//4) (2 pontos) Faça um programa em C que solicite ao usuário uma palavra 
//(string) e depois altere a palavra para que todas as vogais maiúsculas sejam
//substituídas por vogais minúsculas e vice-versa. Exiba a string resultante e
//quantas vogais foram alteradas. Explique nos comentários todas as etapas.

#include <stdio.h>
#include <string.h>


int main() {
  int strch;      //determinando uma variavel do tipo char para "frase" e determinando                 
  char frase[30];  // strch como int para validar o laço for de repetiçõa o qual somado
                   //com o switch case faz a troca das vogais.
  

        printf("entre com a frase (max 30 caracteres) para o tamanho das vogais seja trocado: \n");
        gets(frase); //determinado a frase que será trocada o tamanho das vogais.
         
		 //fazendo o laço "for" que reperiarar da caractere da frase e trocar apenas as vogais no switch
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
