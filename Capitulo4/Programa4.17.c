/* 
Program: Ejercicio 4.17 
Developer: RiveraTheCreator
Date:11/sep/2021
Version:0
Instrucciones: Calcula la hipotenusa
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	float a=0,b=0;
	printf("Introduce los lados de un triangulo rectangulo:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	printf("La hipotenusa es:  %.3f",pow((a*a)+(b*b), 0.5 ));
	return 0;
}