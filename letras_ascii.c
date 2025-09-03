#include <stdio.h>

int main() {
    int i; // Declaramos una variable para usar como contador en nuestros bucles

    printf("Codigos ASCII para letras mayusculas:\n");
    // Bucle para letras mayúsculas (de 'A' a 'Z')
    for (i = 65; i <= 90; i++) {
        printf("%c: %d\n", i, i); // Imprime el carácter y su código ASCII
    }

    printf("\nCodigos ASCII para letras minusculas:\n");
    // Bucle para letras minúsculas (de 'a' a 'z')
    for (i = 97; i <= 122; i++) {
        printf("%c: %d\n", i, i); // Imprime el carácter y su código ASCII
    }

    return 0; // Indica que el programa finalizó correctamente
}