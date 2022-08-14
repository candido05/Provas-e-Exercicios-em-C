//3) Faça um programa em C que tendo como entrada dois pontos quaisquer do plano P(x1,y1) e Q(x2,y2), imprima a distância entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//PROGRAM'S NAME: DISTANCE METER


int main (){
	
	float Pointpx1, Pointpy1, Pointqx2, Pointqy2;
    
    //Declaring the values of the coordinates of points P and Q.
	printf ("whrite a number for Px1:\n ");
	scanf ("%f", &Pointpx1);
	printf ("whrite a number for Py1:\n ");
	scanf ("%f", &Pointpy1);
	printf ("whrite a number for Qx2:\n ");
	scanf ("%f", &Pointqx2);
	printf ("whrite a number for Qy2:\n ");
	scanf ("%f", &Pointqy2);
	
	printf ("the distance between the points %.2f, %.2f of P and %.2f, %.2f of Q is: %.2f units", Pointpx1, Pointpy1, Pointqx2, Pointqy2, sqrtf((Pointqx2 - Pointpx1) * (Pointqx2 - Pointpx1) + (Pointqy2 - Pointpy1 ) * (Pointqy2 - Pointpy1 )));
	//This is the calculation of the distance made using the sum of the squares of the respective coordinates declared, drawing its square root.
	return 0;
}

