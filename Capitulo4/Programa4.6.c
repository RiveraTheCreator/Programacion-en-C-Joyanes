/* 
Program: Ejercicio 4.6 
Developer: RiveraTheCreator
Date:11/sep/2021
Version:0
Instrucciones:leer dos numeros y mostrar el mayor
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n1=0,n2=0;
	printf("Introdusca 2 numeros:\n");
	scanf("%i",&n1);
	scanf("%i",&n2);
	printf("\nEl numero mayor es %i",n1>n2?n1:n2);
	return 0;
}