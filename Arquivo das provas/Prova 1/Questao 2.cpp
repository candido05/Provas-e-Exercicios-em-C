//2) Fa�a um programa em C que solicite 2 n�meros e informe:

 //a) A soma dos n�meros;

 //b) O produto do primeiro n�mero pelo quadrado do segundo;

 //c) O quadrado do primeiro n�mero menos o quadrado do segundo;

 //d) A raiz quadrada da soma dos quadrados;

 //e) O seno da diferen�a do primeiro n�mero pelo segundo;
 
 // PROGRAM'S NAME: EQUATOR
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float number1, number2;
	
	//Declaring the variables
	printf ("whrite a number: \n");
	scanf ("%f", &number1); 
	printf ("whrite another number: \n");
	scanf ("%f", &number2);
	
	printf ("the sum of %.2f plus %.2f is: %.2f\n ", number1, number2, number1 + number2);
	//It is the sum of the two values of the variables.
	
	printf ("the product of %.2f by the square of %.2f is: %.2f\n", number1, number2, number1 * (number2* number2));
	//It is the sum of the values of "number1" by "number2" squared.
	
    printf ("the square of %.2f minus the square of %.2f is: %.2f\n", number1, number2, (number1 * number1) - (number2 * number2));
    //It is the values of the two variables are squared and after that their subtraction occurs.
    
    printf ("the square root of the sum of the square of %.2f plus %.2f is: %.2f\n", number1, number2, sqrt( (number1 * number1) + (number2 * number2 ) ) );
    //It is the values are squared, added together and then the square root of that total is extracted.
    
    printf ("the sine of difference of %.2f by %.2f is: %.2f\n", number1, number2, sin(number1-number2));
    //It is a subtraction of the values of "number2" by "number1" and then the value corresponding to the value of the sine is calculated.

	return 0;
}
