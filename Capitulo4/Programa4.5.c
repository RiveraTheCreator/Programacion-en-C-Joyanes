/* 
Program: Ejercicio 4.5 
Developer: RiveraTheCreator
Date:08/sep/2021
Version:0
Instrucciones:leer e imprimir en el centro del rectangulo
*/
#include<stdio.h>
#include<string.h>
int main()
{ char cad[] = "     ";
	scanf("%5c",&cad);
	printf("* * * * * * * * * * * *\n");
	printf("*                     *\n");
	printf("*        %s        *\n",cad);
	printf("*                     *\n");
	printf("*                     *\n");
	printf("* * * * * * * * * * * *\n");
	return 0;
}
