//2) (1 ponto) Fa�a um programa em C que pe�a um n�mero inteiro inicial ao 
//usu�rio, um valor inteiro de raz�o e calcule os 10 primeiros termos de uma
//P.G. (Progress�o Geom�trica), armazenando-os em um array de tamanho 10. 
//Depois exiba os itens do array na ordem inversa e diga quantos dos valores
//armazenados s�o pares. Explique nos coment�rios como funcionam os arrays.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
    int numero, razao, i, contador; 
    int array[10];
	
	printf ("digite o valor inicial da P.G: \n");
	scanf ("%d", &numero); //declarando o primeiro numero da sequencia
	
	printf ("digite o valor da razao da P.G: \n");
	scanf ("%d", &razao); //declarando o valor da razao
	
	printf ("----------------------------------------------------- \n");
	printf ("P.G do array de 10 posicoes em ordem invertida: \n");
	printf ("----------------------------------------------------- \n");
	
	for (i = 0; i < 10; i++) { //calculando a PG nesse la�o for;
		array[i] = numero * pow(razao, (i - 1));
		 if (array[i] % 2 == 0) {
    	contador++;
		}      	
			
	}
	
	for (i = 10; i > 0; i--) { //colocando a PG em ordem inversa a parti da troca da ordem 
	                          // do valor de "i" e da inverss�o de " i < 10" e " i++" por "i > 0" e "i--".
		printf ("\n%d \n", array[i]);
	}
	
    for (i = 0; i < 10; i++) {  //pondo uma variavel contadora para contar a quantidade de numeros pares dentro da PG da array de 10 esp�os.
    	
	}	

	printf ("quantidade de numeros pares: %d", contador);

	
	return 0;
}
