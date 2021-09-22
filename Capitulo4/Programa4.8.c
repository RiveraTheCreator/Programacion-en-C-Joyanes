/* 
Program: Ejercicio 4.7 
Developer: RiveraTheCreator
Date:11/sep/2021
Version:0
Instrucciones: volumen de un cilidro y area lateral
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.141516
int main(int argc, char const *argv[])
{
	float r=0,a=0;
	printf("Introdusca radio y altura\n");
	scanf("%f",&r);
	scanf("%f",&a);
	printf("\nEl area lateral es %f y el volmen es %f",(PI * r),((PI * pow(r,2))/2) * a );
	return 0;
}