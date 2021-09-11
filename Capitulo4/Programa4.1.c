/* 
Program: Ejercicio 4.1 
Developer: RiveraTheCreator
Date:11/sep/2021
Version:0.01
Instrucciones:leer 2 numeros de 3 digitos e imprimir el cociente, producto, y el resto
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n1=0,n2=0;
	printf("introduce 2 numeros de tres digitos\n");
	scanf("%3i",&n1);
	scanf("%3i",&n2);
	printf("Producto: %i\n",n1*n2);
	printf("Resto: %i\n",n1%n2 );
	printf("Cociente: %.3f\n",(float) n1/n2);
	return 0;
}