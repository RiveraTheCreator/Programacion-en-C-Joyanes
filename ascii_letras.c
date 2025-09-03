#include <stdio.h>

int main() {
    printf("Codigos ASCII para letras mayusculas:\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("El codigo ASCII de %c es %d\n", c, c);
    }

    printf("\nCodigos ASCII para letras minusculas:\n");
    for (char c = 'a'; c <= 'z'; c++) {
        printf("El codigo ASCII de %c es %d\n", c, c);
    }

    return 0;
}