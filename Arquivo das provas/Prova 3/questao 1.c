/*
(+1 ponto): faça o programa perguntar quantos compromissos o usuário quer
cadastrar e reserve o espaço de memória para o array dinamicamente, solicitando
os dados para a quantidade de compromissos definida, e exibindo todos eles em
seguida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
    char frase[50];
    int i, contador[26] = {0};

    //usuario digitanto uma frease que sera examinada
    printf("\ndigite uma frase: \n");
    scanf ("%s", frase);      
    printf("\n");

	
    for ( i = 0; i < strlen(frase); i++) { 
 
 		//definindo que seja lido apenas letras do alfabeto, desse modo evitando a comtagem
 		//de outros tipos de caracteres aleatorios digitados
        if (frase[i] >= 'a' && frase[i] <= 'z') 
            contador[frase[i] - 'a']++; 
            
    }
 	
 	//imprimindo as letras e a frequencia que aparecem de arcodo com sua posicao no alfabeto
    for (i = 0; i < 26; i++){ 
 
        if (contador[i] != 0)
            printf("%d vezes da letra %c. aparece\n", contador[i], i + 'a'); 
    }

    return 0;
}
