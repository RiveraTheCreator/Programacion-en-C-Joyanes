/* 
Program: Ejercicio 4.19
Developer: RiveraTheCreator
Date:28/sep/2021
Version:0
Instrucciones: Calcula el area del triangulo
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	float r=0;
	printf("Radio del circulo:");
	scanf("%f",&r);
	printf("El area es: %f\n",M_PI * pow(r,2));
	float d = M_PI * (r*2);
	printf("Diametro:%f \n",d );
	printf("Longitud de circunferencia: %f\n",d * M_PI );

	return 0;
}