/* 
Program: Ejercicio 4.2
Developer: RiveraTheCreator
Date:10/sep/2021
Version:0
Instrucciones:convertir grados F a C
*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
	float Cdegrees;
	scanf("%f",&Cdegrees);
	printf("temperatura en grados F:\n");
	printf("%.2f",((Cdegrees*9)/5) + 32);
	return 0;
}