// 1) Faça um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.


//PROGRAM'S NAME: METER CONVERSION TO dm, cm AND mm.


#include <stdio.h>
#include <stdlib.h>

int main (){
	 
	float number_meters;
	
	//Declaring the variables 
	printf ("write a number in meters for reading:\n ");
	scanf ("%f", &number_meters);
	
	printf("the converted number of meters to decimeter is: %.2f dm\n",  number_meters/10);
	printf ("the converted number of meters to centimeter is: %.3f cm\n", number_meters/100);
	printf("the converted number of meters to milimeter is: %.4f mm\n", number_meters/1000);
	//The conversion from mathematical operations of the variable "number_meters" by 10, to
    //decimeter; per 100, for centimeter and per 1000, for millimeter.
	return 0;

}
