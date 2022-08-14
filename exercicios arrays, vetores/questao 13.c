/*
Construa um programa que realize as reservas de passagens áreas de uma companhia. O programa deve permitir cadastrar o número de 10 voos e definir a
quantidade de lugares disponíveis para cada um. Após o cadastro, leia vários
pedidos de reserva, constituídos do número da carteira de identidade do cliente e
do número do voo desejado. Para cada cliente, verificar se há possibilidade no
voo desejado. Em caso afirmativo, imprimir o número da identidade do cliente e
o número do voo, atualizando o número de lugares disponíveis. Caso contrário,
avisar ao cliente a inexistência de lugares. A leitura do número 0 (zero) para o voo
desejado indica o término da leitura de reservas.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, identidade_cliente, i, contador;
	int numero_do_voo[10], numero_lugares[10], acento[10];
	
	for ( i = 0; i < 10; i++) {
		
		printf ("digite o numero do voo: \n");
		scanf ("%d", &numero_do_voo[i]);
		printf ("digite a quantidade de lugares no voo: \n");
		scanf ("%d", &numero_lugares[i]);
		acento[i] = 0;
	}
	
	do {
		
		printf ("\ndigite o numero do voo para o cliente: \n");
		scanf ("%d", &numero);
		contador = 0;
		
		for ( i = 0; i < 10; i++) {
			
			if (numero == numero_do_voo[i]) {
				
				if (acento[i] < numero_lugares[i]) {
					
					printf ("\ndigite a indentidade do cliente: \n");
					scanf ("%d", &identidade_cliente);
					printf ("\nvoo numero: -- %d --", numero_do_voo[i]);
					printf ("\nidentidade do cliente: -- %d --", identidade_cliente);
					acento[i]++;
					
					}
					 else
					    printf ("\n voo cheio. \n");
				
			}
			  else 
			      contador++;	
			
		} 
		  if (contador == 10)
		      printf ("\nvoo nao econtrado.");
		
		
	} while ( numero != 0);
    
	}
