/* 
Program: Ejercicio 4.21 
Developer: RiveraTheCreator
Date:28/sep/2021
Version:0
Instrucciones: Calcula la hipotenusa
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char const *argv[])
{	int num=0;
	printf("Introduce un numero:  ");
	scanf("%i",&num);
	printf("%s\n",num==0 ? "Es cero" : num>0?"Es positivo" :"Es negativo" );	
	return 0;
}