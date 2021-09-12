/* 
Program: Ejercicio 4.3 
Developer: RiveraTheCreator
Date:12/sep/2021
Version:0
Instrucciones:leer los coeficientes y encontrar a x & y
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a=0,b=0,c=0,d=0,e=0,f=0;
	printf("Un sistema de ec lineales esta dado por:\naX + bY = c\ndX + eY = f\n\nIntroduce los coeficientes en orden:\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	scanf("%i",&d);
	scanf("%i",&e);
	scanf("%i",&f);
	printf("El valor de X es %.3f\n",(float)(((c*e) - (b*f))/((a*e)-(b*d))));
	printf("El valor de Y es %.3f\n",(float)(((a*f) - (c*d))/((a*e)-(b*d))));

	return 0;
}