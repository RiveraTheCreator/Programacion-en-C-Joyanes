#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_terms;
    printf("Introduce el número de términos para calcular Pi: ");
    if (scanf("%d", &num_terms) != 1 || num_terms <= 0) {
        printf("Entrada inválida. Por favor, introduce un número entero positivo.\n");
        return 1;
    }

    long double pi_approx = 4.0L; // Comenzamos con 4
    long double current_numerator = 2.0L;
    long double current_denominator = 3.0L;

    for (int i = 0; i < num_terms; ++i) {
        // Multiplicar por el término actual (current_numerator / current_denominator)
        pi_approx *= current_numerator / current_denominator;

        // Actualizar el numerador y el denominador para el *siguiente* término
        // La serie tiene un patrón de incremento que se repite cada 4 términos:
        // (2/3) -> (4/5) -> (6/5) -> (6/7) -> (8/7) -> (8/9) -> (10/9) -> (10/11) ...
        // i=0 (2/3) -> num se incrementa en 2, den se incrementa en 2 (para 4/5)
        // i=1 (4/5) -> num se incrementa en 2, den se mantiene (para 6/5)
        // i=2 (6/5) -> num se mantiene, den se incrementa en 2 (para 6/7)
        // i=3 (6/7) -> num se incrementa en 2, den se mantiene (para 8/7)
        if (i % 4 == 0) {
            current_numerator += 2.0L;
            current_denominator += 2.0L;
        } else if (i % 4 == 1) {
            current_numerator += 2.0L;
        } else if (i % 4 == 2) {
            current_denominator += 2.0L;
        } else { // i % 4 == 3
            current_numerator += 2.0L;
        }
    }

    printf("El valor aproximado de Pi con %d términos es: %.15Lf\n", num_terms, pi_approx);

    return 0;
}