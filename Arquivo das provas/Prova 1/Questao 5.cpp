//5) Dados os 3 valores A, B, C, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se forem, verificar se comp�em um tri�ngulo equil�tero, is�sceles ou escaleno.

//Informar se n�o compuseram nenhum tri�ngulo.

//� Tri�ngulo: figura geom�trica de 3 lados, onde cada um � menor do que a soma dos outros dois.

//� Tri�ngulo eq�il�tero: Tri�ngulo com 3 lados iguais.

//� Tri�ngulo is�sceles: Tri�ngulo com 2 lados iguais.

//� Tri�ngulo escaleno: Tri�ngulo com todos os lados diferentes.

#include <stdio.h>
#include <stdlib.h>

//PROGRAM'S NAME: TYPES OF TRIANGLES.

int main (){
	
	int sideA, sideB, sideC;
	
	//Declaring the vaules of the sides of the triangle.
	printf ("whrite a number for one of the sides:\n ");
	scanf ("%d", &sideA);
	printf ("whrite another number for another side:\n ");
	scanf ("%d", &sideB);
	printf ("whrite the last number for the last side:\n ");
	scanf ("%d", &sideC);
	
	//To know if the triangle is able to be formed.
	if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB) {
	
	    printf ("the triangle will be formed\n");
    } else {
    	
    	printf ("the triangle will not be formed\n");
    	return 0;
	}
	
	//To know if the triangle is equilateral.
	if (sideA == sideB && sideB == sideC)
	
	    printf ("the triangle is equilateral\n");
	
	//To know if the triangle is scalene.    
	if (sideA != sideB && sideB != sideC && sideA != sideC) 
	   
	    printf ("the triangle is scalene\n");
	 
	 //To know if the triangle is isosceles   
	if (sideA == sideB && sideB != sideC || sideA != sideB && sideB == sideC)
	   
	    printf ("the triangle is isosceles\n");    
	    
	
	return 0;
}
