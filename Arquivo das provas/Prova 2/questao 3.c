//3) (1 ponto) Fa�a um programa em C que calcule e armazene em um array 
//bidimensional os valores das tabuadas de 1 a 10. Depois, solicite do usu�rio
//um valor inteiro entre 1 e 10 (repita a solicita��o enquanto o usu�rio n�o
//inserir corretamente) e exiba a tabuada do n�mero correspondente, a partir
//dos valores constantes no array bidimensional.

#include <stdio.h>
    
#define linhas 2
#define colunas 11

int main() {
	
    int taboada[linhas][colunas]; //defindo um array tipo matriz
    int i,j; //as variaveis que servir�o pata o calculo da tabuada.
    
    //fazendo o usuario definir o numero que ser� feito a tabuada de 1 ate 10
    printf("digite um numero para ser mostrado sua tabuada \n");
    scanf("%i", &i);
     
    //la�o for simples para calcular a taboada.
    for (j = 0; j < colunas; j++){ 
        printf("%d x %i = %d \n", j, i, j * i);
    }

    return 0;
}
