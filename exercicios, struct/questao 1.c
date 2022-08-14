/*
Implemente um programa em C que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida.
*/

#include <stdio.h>
#include <stdlib.h>


struct pessoa {
	
	char nome[30];
	int idade;
	char endereco[50];
	
};

int main () {

   struct pessoa p;
   
   printf ("informe o nome da pessoa: \n");
   scanf ("%s", &p.nome);
   printf ("informe a idade: \n");
   scanf ("%d", &p.idade);
   printf ("informe o endereco :\n");
   scanf ("%s", &p.endereco);

   printf ("\n\n");
   
   printf ("nome: %s \n", p.nome);
   printf ("idade: %d \n", p.idade);
   printf ("endereco: %s \n", p.endereco);

   return 0;
}
