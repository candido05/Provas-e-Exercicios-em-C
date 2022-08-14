/*
Crie uma estrutura representando uma hora. Essa estrutura 
deve conter os campos hora, minuto e segundo. Agora, escreva 
um programa que leia um vetor decinco posições dessa estrutura 
e imprima a maior hora.
*/

#include <stdio.h>
#include <stdlib.h>

struct horario {
	
	int hora;
	int minutos;
	int segundos;
	
};

typedef struct horario Hora;

int main () {
	
	Hora horarios[5], hora_maior;
	int i;
	
	hora_maior.hora = 0;
	hora_maior.minutos = 0;
	hora_maior.segundos = 0;
	
	for ( i = 0; i < 5; i++) {
		
		printf ("informe a hora: \n");
		scanf ("%d", &horarios[i].hora);
		printf ("\n--------------------------------------------\n");
		printf ("informe os minutos: \n");
		scanf ("%d", &horarios[i].minutos);
		printf ("\n--------------------------------------------\n");
		printf ("informe os segundos: \n");
		scanf ("%d", &horarios[i].segundos);
		printf ("\n--------------------------------------------\n");
	
	if ( (horarios[i].hora > hora_maior.hora) || (horarios[i].hora == hora_maior.hora && horarios[i].minutos > hora_maior.minutos) || (horarios[i].hora == hora_maior.hora && horarios[i].minutos == hora_maior.minutos && horarios[i].segundos > hora_maior.segundos) ) {
          
        hora_maior.hora = horarios[i].hora;
        hora_maior.minutos = horarios[i].minutos;
        hora_maior.segundos = horarios[i].segundos;
        	
		}
	}
	
	printf ("\n\n");
	printf("Maior hora lida: Hora -- %d -- Minutos -- %d -- Segundos -- %d --", hora_maior.hora, hora_maior.minutos, hora_maior.segundos);
		
	return 0;
}
