/*
A Viação José Maria Rodrigues tem na Rodoviária de Rio Novo uma tabela contendo os horários de partidas dos ônibus para Juiz de Fora nos sete dias da
semana. Faça um programa que possa armazenar esses horários e os horários do
dia quando forem solicitados pelo funcionário, sabendo-se que, no máximo, são
dez horários. Ao final, o programa deve imprimir a lista de horários para todos os
dias
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float matriz[7][10], horario;
    int dia, i, j, opcao;	
	int j1 = 0, j2 = 0, j3 = 0, j4 = 0, j5 = 0, j6 = 0, j7 = 0;
	
	//zerando os horarios
	
	for ( i = 0; i < 7; i++) {
		for ( j = 0; j < 10; j++) {
			matriz[i][j] = 0;
		}
	}
	
	//cadastrando os horarios
	
	do {
		
		printf ("informe o dia entre 1 e 7; \n");
		scanf ("%d", &dia);
		printf ("\ninforme o horario de saida: \n");
		scanf ("%f", &horario);
		
		switch (dia) {
			
			case 1: {
				matriz[dia - 1][j1] = horario;
				j1++;
				break;
			}
			
			case 2: {
				matriz[dia - 1][j2] = horario;
				j2++;
				break;
			}
			
			case 3: {
				matriz[dia - 1][j3] = horario;
				j3++;
				break;
			}
			
			case 4: {
				matriz[dia - 1][j4] = horario;
				j4++;
				break;
			}
			
			case 5: {
				matriz[dia - 1][j5] = horario;
				j5++;
				break;
			}
			
			case 6: {
				matriz[dia - 1][j6] = horario;
				j6++;
				break;
			}
			
			case 7: {
				matriz[dia - 1][j7] = horario;
				j7++;
				break;
			}
			
			default: {
				printf ("OPCAO INVALIDA!");
				break;
			}
			
		}
		
		if ( j1 >= 10 && j2 >= 10 && j3 >= 10 && j4 >= 10 && j5 >= 10 && j6 >= 10 && j7 >= 10) {
			printf ("HORARIOS CHEIOS!");
			break;
		}
		
		printf ("continuar cadastrando: -- 0 PARAR || 1 CONTINUAR -- \n");
		scanf ("%d", &opcao);
		
	} while ( opcao != 0 );
	

    for ( i = 0; i < 7; i++) {
    	printf ("dia %d \n", i + 1); 
    	  for ( j = 0; j < 10; j++) {
    	  	printf ("%2.f \t", matriz[i][j]);
		  }
	}

	return 0;
}
