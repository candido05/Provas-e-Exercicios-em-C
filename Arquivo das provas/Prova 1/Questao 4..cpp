//4) Faça um programa em C que leia o dia, o mês e o ano de nascimento do usuário e o dia, o mês e o ano atual*.
// Exiba na tela a idade do usuário, e se é maior de idade (idade maior ou igual a 18).
//* bonus de meio ponto (0,5) para quem recuperar a data atual do sistema (automaticamente, sem solicitar ao usuário).

#include <stdio.h>
#include <stdlib.h>

//PROGRAM'S NAME: ADULTHOOD METER.

int main (){
	
	int dayB, dayC, monthB, monthC, yearB, yearC, age;
	
	//Declaring the date of birth.
	printf ("whrite the day you were born:\n ");
	scanf ("%d", &dayB);
	printf ("whrite the number of month you were  born:\n ");
	scanf ("%d", &monthB);
	printf ("whrite the year you were born:\n ");
	scanf ("%d", &yearB);
	
	//Declaring the current date.
	printf ("whrite the current day:\n ");
	scanf ("%d", &dayC);
	printf ("whrite the current month:\n ");
	scanf ("%d", &monthC);
	printf ("write the current year:\n");
	scanf ("%d", &yearC);
	
    if ("%d", &dayB = 28) {
	
	    dayB = (dayB - 1);
}

	age = ((365*yearC) + (30*monthC) + (dayC) - (365*yearB) - (30*monthB) - (dayB))/365;
	//The calculate to find out the age of the user in relation to the current date.
	
	//The years written by the user are multiplied by 365, the months written by
	//the user are multiplied by 30 and finally the days are added. After that, the "current" 
    //value is subtracted by the "birth" value, the result is divided by 365.
	
	
    printf ("the user's age is: %d\n", age);
    
    if ("%d", age >= 18)
	
	 printf ("the user is of legal age");

    if ("%d", age < 18) 
	 printf("the user is not of legal age");
	   
	return 0;
}
