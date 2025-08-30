#include <stdio.h>

int main() {
    float salario_actual;
    float nuevo_salario;
    float aumento_porcentaje;

    printf("Introduce el salario actual del empleado: ");
    scanf("%f", &salario_actual);

    // Determinamos el porcentaje de aumento según el salario actual
    if (salario_actual < 9000) {
        aumento_porcentaje = 0.20; // 20% de aumento
    } else if (salario_actual >= 9000 && salario_actual < 15000) {
        aumento_porcentaje = 0.10; // 10% de aumento
    } else if (salario_actual >= 15000 && salario_actual < 20000) {
        aumento_porcentaje = 0.05; // 5% de aumento
    } else { // salario_actual >= 20000
        aumento_porcentaje = 0.00; // 0% de aumento
    }

    // Calculamos el nuevo salario
    nuevo_salario = salario_actual + (salario_actual * aumento_porcentaje);

    printf("El salario actual es: %.2f\n", salario_actual);
    printf("El porcentaje de aumento aplicado es: %.0f%%\n", aumento_porcentaje * 100);
    printf("El nuevo salario es: %.2f\n", nuevo_salario);

    return 0;
}