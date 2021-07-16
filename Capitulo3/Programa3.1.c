/* 
Program: Ejercicio 3.1 
Developer: RiveraTheCreator
Date:15/jul/2021
Version:0
Instrucciones: Cual es la salida?
*/
#include<stdio.h>
int main()
{
	char pax[]= "Juan Sin Miedo";
	printf("%s %s\n",pax,&pax[4]);
	puts(pax);
	puts(&pax[4]);
	return 0;
}

/* 
OUT:
Juan Sin Miedo  Sin Miedo
Juan Sin Miedo
 Sin Miedo
*/