#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper or tolower

// Función auxiliar para verificar si un carácter es una vocal (insensible a mayúsculas/minúsculas)
int es_vocal(char c) {
    c = toupper(c); // Convertir a mayúscula para simplificar la comparación
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

// Función recursiva para calcular el número de vocales en una cadena
int vocales(char *cd) {
    // Caso base: Si la cadena está vacía (carácter nulo '\0'), no hay vocales
    if (*cd == '\0') {
        return 0;
    } else {
        // Paso recursivo:
        // Si el carácter actual es una vocal, sumar 1; de lo contrario, sumar 0.
        // Luego, llamar a la función vocales para el resto de la cadena (cd + 1).
        return (es_vocal(*cd) ? 1 : 0) + vocales(cd + 1);
    }
}

int main() {
    char cadena1[] = "Hello World";
    char cadena2[] = "Programming is fun";
    char cadena3[] = "AEIOUaeiou";
    char cadena4[] = "";

    printf("Numero de vocales en \"%s\": %d\n", cadena1, vocales(cadena1));
    printf("Numero de vocales en \"%s\": %d\n", cadena2, vocales(cadena2));
    printf("Numero de vocales en \"%s\": %d\n", cadena3, vocales(cadena3));
    printf("Numero de vocales en \"%s\": %d\n", cadena4, vocales(cadena4));

    return 0;
}