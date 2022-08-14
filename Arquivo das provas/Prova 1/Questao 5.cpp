//5) Dados os 3 valores A, B, C, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se forem, verificar se compõem um triângulo equilátero, isósceles ou escaleno.

//Informar se não compuseram nenhum triângulo.

//• Triângulo: figura geométrica de 3 lados, onde cada um é menor do que a soma dos outros dois.

//• Triângulo eqüilátero: Triângulo com 3 lados iguais.

//• Triângulo isósceles: Triângulo com 2 lados iguais.

//• Triângulo escaleno: Triângulo com todos os lados diferentes.

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
