/*
Crie um programa para gerenciar um sistema de reservas de mesas em uma casa
de espet�culo. A casa possui 30 mesas de 5 lugares cada. O programa dever�
permitir que o usu�rio escolha o c�digo de uma mesa (100 a 129) e forne�a a
quantidade de lugares desejados. O programa dever� informar se foi poss�vel
realizar a reserva e atualizar a reserva. Se n�o for poss�vel, o programa dever�
emitir uma mensagem. O programa deve terminar quando o usu�rio digitar
o c�digo 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int contador_de_cadeiras = 0, numero, cadeiras, i, n;
	int vetor_mesas[30];
	
	for ( i = 0; i < 30; i++) 
	    vetor_mesas[i];
	do {
		
		printf ("digite o numero da mesa para a reserva  ( -- entre 100 e 130 -- ) : \n");
		scanf ("%d", &numero);
		
		if ( numero > 100 && numero < 130) {
			
			printf ("digite o numero de cadeiras; \n");
			scanf ("%d", &cadeiras);
			
			if ( cadeiras > 0 && cadeiras < 6) {
				n = numero % 100;
				
				if (vetor_mesas[n] + cadeiras < 6) {
					printf ("foi possivel reserva / atualizar a reserva.\n");
					vetor_mesas[n] += cadeiras;
					contador_de_cadeiras += cadeiras;
					
				} else 
				    printf ("mesa nao possui a quantidade de cadeiras solicitadas.\n");
				
			} else 
				printf ("mesa nao possui a quantidade de cadeiras solicitadas.\n");
			        
		} else 
		    printf ("numero invalido.\n");
		    
		   if (contador_de_cadeiras == 150)
		      break;  
		
	} while ( numero != 0);	  
	
	
	}
