#include <stdio.h>

int main() {
    int n;

    // Solicitar al usuario un valor no negativo para n
    printf("Introduce un valor no negativo para n: ");
    scanf("%d", &n);

    // Validar que n sea no negativo
    if (n < 0) {
        printf("El valor de n debe ser no negativo.\n");
        return 1; // Indicar error
    }

    // Bucle exterior para controlar las filas, desde n hasta 1
    for (int i = n; i >= 1; i--) {
        // Bucle interior para imprimir los números de 1 hasta el valor actual de i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // Imprime el número seguido de un espacio
        }
        printf("\n"); // Salto de línea después de cada fila
    }

    return 0; // Indicar éxito
}