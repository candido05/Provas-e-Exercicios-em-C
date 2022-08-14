//1) (2 pontos) Um determinado material radioativo perde metade de sua massa
//a cada 50 segundos. Faça um programa em C que pergunte a massa inicial (float),
//em gramas, e calcule o tempo necessário para que essa massa do material se 
//torne menor que 0,5 grama. O programa em C deve apresentar a massa inicial, a 
//massa final e o tempo em segundos. Explique nos comentários como funciona
//a estrutura de repetição utilizada.

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//usando as variaveis, uma para contar o tempo, a qual serve de coeficiente para multiplicar
	// os segundos, para saber a quantidade de segundos que será gasto para a massa ser menor do 
	//que 0,5 gramas
	int conTempo = 0;
	float massa, massa_retorno, tempo;	
	
		printf("Digite a massa em gramas do material: \n"); //declarando a variavel de messa
		scanf("%f", &massa);
 
        massa_retorno = massa;// fazendo uso de uma variavel de auxilar de retorno para obter o valor
                              //original da "massa" antes que entre no laço "while",
 
		while (massa >= 0.5) { //realizando um laço while para calcular a massa final da meia vida

			conTempo++;
			
			massa *= 0.5;
			
		}
         
        //multiplicando o coeficiente de tempo pelos segundos de redução de vida do composto quimico
		tempo = conTempo * 50;
		printf("O tempo foi de: %2.f segundos. \n", tempo);
		printf ("a massa original era de %2.f gramas: \n", massa_retorno);
		printf("a massa final em gramas foi %f: \n", massa);
		 
				 
    return 0;
}
		
