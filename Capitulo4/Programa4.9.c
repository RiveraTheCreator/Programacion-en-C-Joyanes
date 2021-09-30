/* 
Program: Ejercicio 4.9 
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
	float a=0,b=0,c=0,p=0,area=0,argu;
	printf("%s\n","introduce los lados de un triangulo:\n" );
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	p = (a+ b +c)/2;
	argu = p * ((p-a)*(p-b)*(p-c));
	area = pow(argu,1/2);
	printf("Semiperimetro: %f\n", p);
	printf("Area: %.3f\n",area );
	return 0;

}