#include <stdio.h>
#include <string.h> // Necesario para strlen

// Función para invertir una cadena de caracteres
void reverseString(char *str) {
    int length = strlen(str); // Obtener la longitud de la cadena
    int i, j;
    char temp;

    // Usar dos índices, uno desde el principio (i) y otro desde el final (j)
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];      // Guardar el caracter del principio
        str[i] = str[j];    // Reemplazar el caracter del principio con el del final
        str[j] = temp;      // Reemplazar el caracter del final con el que estaba al principio
    }
}

int main() {
    char myString[] = "hola"; // Declarar una cadena
    printf("Cadena original: %s\n", myString);

    reverseString(myString); // Llamar a la función para invertir la cadena

    printf("Cadena invertida: %s\n", myString);

    char anotherString[] = "programacion";
    printf("Cadena original: %s\n", anotherString);
    reverseString(anotherString);
    printf("Cadena invertida: %s\n", anotherString);

    return 0;
}