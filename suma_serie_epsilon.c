#include <stdio.h>

int main() {
    double epsilon = 1e-6; // Valor de épsilon predefinido
    double sum = 0.0;
    int N = 1;

    // Encontrar N tal que 1.0/N < epsilon
    // El bucle incrementa N hasta que la condición 1.0/N < epsilon se cumple.
    // Esto significa que la última N para la cual 1.0/N >= epsilon fue N-1.
    // Al salir del bucle, N es el primer entero para el cual 1.0/N < epsilon.
    while (1.0 / N >= epsilon) {
        N++;
    }

    printf("El valor de N para el cual 1/N es menor que %.0e es: %d\n", epsilon, N);

    // Calcular la suma de la serie 1/1 + 1/2 + ... + 1/N
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    printf("La suma de la serie 1/1 + 1/2 + ... + 1/%d es: %.6f\n", N, sum);

    return 0;
}