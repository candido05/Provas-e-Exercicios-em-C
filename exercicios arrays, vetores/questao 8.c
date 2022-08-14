/*

Construa um programa que armazene o código, a quantidade, o valor de compra
e o valor de venda de 30 produtos. A listagem pode ser de todos os produtos ou
somente de um ao se digitar o código.

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, codigo[3], quantidade[3], resposta;
	float valor_de_comprar[3], valor_de_venda[3];
	
	for ( i = 0; i < 3; i++) {
	
	printf ("digite o codigo do produto: \n");
	scanf ("%d", &codigo[i]);
	printf ("digite a quantidade do produto: \n");
	scanf ("%d", &quantidade[i]);
	printf ("digite o valor de compra do produto: \n");
	scanf ("%f", &valor_de_comprar[i]);
	printf ("digite o valor de venda do produto: \n");
	scanf ("%f", &valor_de_venda[i]);
	}
	
	printf ("\n1 - listar todos os produtos \n");
	printf ("\n2 - listar produto por codigo\n");
	scanf ("%d", &resposta);
	
	switch (resposta) {
		
		case 1: {
			
			for ( i = 0; i< 3; i++){
				
				printf ("\n     \n");
			    printf ("--------------------------------------------------------------\n");
				printf ("\no produto numero ( %d ) de codigo - %d - com quantidade - %d\n", i + 1, codigo[i], quantidade[i]);
			    printf ("tem valor de compra -- R$ %3.f -- e valor de venda de -- R$ %3.f -- \n", valor_de_comprar[i], valor_de_venda[i]);
			    printf ("\n     \n");
			    printf ("---------------------------------------------------------------\n");
			}
			break;
		} 
	
	    case 2: {
	    
		    printf ("digite o codigo do produto; \n");
		    scanf ("%d", &resposta);
		    
	        for ( i = 0; i< 3; i++) {
	        	if (codigo[i] == resposta) {
	        		
	        	printf ("\n     \n");
			    printf ("------------------------------------------------------------------\n");
				printf ("\no produto numero ( %d ) de codigo - %d - com quantidade - %d\n", i + 1, codigo[i], quantidade[i]);
			    printf ("tem valor de compra -- R$ %3.f -- e valor de venda de -- R$ %3.f -- \n", valor_de_comprar[i], valor_de_venda[i]);
			    printf ("\n     \n");
			    printf ("-------------------------------------------------------------------\n");
				}
			}
			 
			break;
		}
	
	
      	default : {
		printf ("RESULTADO INVALIDO");
		break;
    	}
	
		 
	}
	
	
	return 0;
}
