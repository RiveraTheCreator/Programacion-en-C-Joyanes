#include <stdio.h>

int main() {
    double epsilon;
    double suma = 0.0;
    int N = 1; // Comenzamos N en 1 para 1/1, 1/2, 1/3...

    printf("Introduce el valor de epsilon (un número decimal pequeño): ");
    scanf("%lf", &epsilon);

    // Bucle para sumar los términos 1/N hasta que 1/N sea menor que epsilon
    while ((1.0 / N) >= epsilon) {
        suma += (1.0 / N); // Suma el término actual
        N++;               // Incrementa N para el siguiente término
    }

    printf("La suma de la serie es: %.10lf\n", suma);
    // N en este punto es el primer valor para el cual 1/N fue menor que epsilon
    printf("El valor de N para el cual 1/N fue por primera vez menor que epsilon es: %d\n", N);

    return 0;
}