/*
Construa um programa que realize as reservas de passagens �reas de uma companhia. O programa deve permitir cadastrar o n�mero de 10 voos e definir a
quantidade de lugares dispon�veis para cada um. Ap�s o cadastro, leia v�rios
pedidos de reserva, constitu�dos do n�mero da carteira de identidade do cliente e
do n�mero do voo desejado. Para cada cliente, verificar se h� possibilidade no
voo desejado. Em caso afirmativo, imprimir o n�mero da identidade do cliente e
o n�mero do voo, atualizando o n�mero de lugares dispon�veis. Caso contr�rio,
avisar ao cliente a inexist�ncia de lugares. A leitura do n�mero 0 (zero) para o voo
desejado indica o t�rmino da leitura de reservas.
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
