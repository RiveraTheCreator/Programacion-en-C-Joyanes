#include <stdio.h>

int main() {
    double mass_grams;
    const double SPEED_OF_LIGHT = 2.997925e10; // cm/s
    double energy_ergs;

    // Solicitar al usuario que ingrese la masa en gramos
    printf("Ingresa la masa en gramos: ");
    scanf("%lf", &mass_grams);

    // Calcular la energía usando E = mc^2
    // m en gramos, c en cm/s -> E en ergs
    energy_ergs = mass_grams * SPEED_OF_LIGHT * SPEED_OF_LIGHT;

    // Mostrar el resultado
    printf("La energía producida es: %.4e ergs\n", energy_ergs);

    return 0;
}