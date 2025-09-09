#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un valor no negativo (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El valor ingresado debe ser no negativo.\n");
        return 1;
    }

    // Bucle exterior: Controla las filas (desde n hasta 1)
    for (int i = n; i >= 1; i--) {
        // Bucle interior modificado: Imprime los números de cada fila en orden descendente
        for (int j = i; j >= 1; j--) { // J empieza en i, va hasta 1, disminuyendo
            printf("%d ", j); // Imprime el número 'j' seguido de un espacio
        }
        printf("\n"); // Salto de línea para la siguiente fila
    }

    return 0;
}