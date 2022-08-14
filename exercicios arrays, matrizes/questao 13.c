/*
A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra as quantidades de serviços executados nos "pes", nas "mãos"e o serviço de podologia
das cinco manicures. Sabendo-se que cada uma ganha 50% do que faturou ao
mês, criar um programa que possa calcular e imprimir quanto cada uma vai
receber, uma vez que não têm carteiras assinadas, os valores, respectivamente,
são: R$10,00, R$15,00 e R$30,00.
*/

#include <stdio.h>
#include <stdlib.h>

int main () { 

   int manicure = 0, servico, servicos[5][3], i , j, soma;

   for ( i = 0; i < 5; i++) {
   	for ( j = 0; j < 3; j++)
   	    servicos[i][j] = 0;
   }

   do {
   	
   	printf ("informe a manicure ( -- 1 -- 2 -- 3 -- 4 -- 5 -- ) \n");
   	scanf ("%d", &manicure);
   	printf ("informe o servico ( 1 --> PE | 2 --> MAO | 3 --> PODOLOGIA ) \n");
   	scanf ("%d", &servico);
   	
   	if ( manicure >= 1 && manicure <= 5) {
   		if ( servico >= 1 && servico <= 3) {
   			 servicos[ manicure - 1][servico -1]++;
   			 
		   } else
		     printf ("ESCOLHA INVALIDA! \n");
   		
	   } else
	     printf ("ESCOLHA INVALIDA! \n");
   	
   } while (manicure != 0);

   printf ("faturamento das manicures: \n");
   
   for ( i = 0; i < 5; i++) {
   	
   	soma = servicos[i][0] * 10;
   	soma += servicos[i][1] * 15;
   	soma += servicos[i][2] * 30;
   	
   	printf ("manicure ( -- %d -- ): %d \n", i + 1, soma);
   	
   }

   return 0;
}
