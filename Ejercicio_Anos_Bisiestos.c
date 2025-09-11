#include <stdio.h>

int main() {
    printf("Años bisiestos en el siglo XXII (2101 - 2200):\n");

    for (int year = 2101; year <= 2200; year++) {
        // Condición para un año bisiesto:
        // (Divisible por 4 Y no divisible por 100)
        // O
        // (Divisible por 400)
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d es un año bisiesto.\n", year);
        }
    }

    return 0;
}
