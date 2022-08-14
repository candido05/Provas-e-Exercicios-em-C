/*

Crie um programa que leia o preço de compra e o preço de venda de 10 mercadorias (utilize vetores). Ao final, o programa deverá imprimir quantas mercadorias
proporcionam:
• lucro < 10%
• 10% <= lucro <= 20%
• lucro > 20%

*/

#include <stdio.h>
#include <stdlib.h>


int main () {
	
	int i, lucro_menor10 = 0, lucro_menor20 = 0, lucro_maior20 = 0;
	float preco_compra[10], preco_venda[10], lucro;
	
	for ( i = 0; i < 10; i++) {
		printf ("digite o preco de compra do produto: \n");
		scanf ("%f", &preco_compra[i]);
		printf ("digite o preco de venda do produto: \n");
		scanf ("%f", &preco_venda[i]);
		
		lucro = (preco_compra[i] / preco_venda[i]) * 100;
		
		if (lucro < 10) {
			lucro_menor10++;
		} else {
			if (lucro <= 20) {
				lucro_menor20++;
			} else {
				lucro_maior20++;
			}
		}
	}
	
	printf ("quantidade com ate 10 por cento de lucro: %2.d\n", lucro_menor10);
	printf ("quantidade com ate 20 por cento de lucro: %2.d\n", lucro_menor20);
	printf ("quantidade com mais de 20 por cento de lucro: %2.d\n", lucro_maior20);
	
	
  }
