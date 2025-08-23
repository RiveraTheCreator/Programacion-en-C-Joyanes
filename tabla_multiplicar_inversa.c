#include <stdio.h> // Necesario para la función printf

int main() {
    int n, m; // Declaramos dos variables enteras para nuestros contadores

    // Bucle exterior: Itera 'n' desde 1 hasta 10
    // Esto representará el número principal en nuestra tabla de multiplicar
    for (n = 1; n <= 10; n++) {
        // Bucle interior: Itera 'm' desde 10 hasta 1 (descendente)
        // Esto representará el multiplicador para 'n'
        for (m = 10; m >= 1; m--) {
            // Imprimimos la operación de multiplicación y su resultado
            // %d se usa para imprimir valores enteros
            // \n al final crea un salto de línea para cada resultado
            printf("%d veces %d = %d \n", n, m, n * m);
        }
    }

    return 0; // Indica que el programa finalizó con éxito
}