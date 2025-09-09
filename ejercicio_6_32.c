#include <stdio.h>

int main() {
    int n;

    // Solicitar al usuario que ingrese un valor para n
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    // Aplicar la lógica según la cantidad de dígitos
    // Si el número es menor de 100 (uno o dos dígitos), se imprime tal cual.
    // Ej: 12 -> 12
    if (n < 100) {
        printf("%d\n", n);
    } else { // Si el número es de tres o más dígitos, se separa el último.
             // Ej: 123 -> 12 3
        int parte_entera = n / 10; // Obtiene el número sin el último dígito
        int ultimo_digito = n % 10; // Obtiene el último dígito
        printf("%d %d\n", parte_entera, ultimo_digito);
    }

    return 0;
}
