#include <stdio.h>

int main() {
    printf("Años bisiestos en el siglo XXII (2101 - 2200):\n");

    for (int year = 2101; year <= 2200; year++) {
        // Un año es bisiesto si es divisible por 4
        // EXCEPTO si es divisible por 100
        // A MENOS que sea divisible por 400
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
    }

    return 0;
}