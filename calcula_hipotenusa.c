#include <stdio.h> // Para entrada y salida (printf, scanf)
#include <math.h>  // Para funciones matemáticas como sqrt y pow

int main() {
    double lado1, lado2, hipotenusa;

    // Solicitar al usuario las longitudes de los lados
    printf("Introduce la longitud del primer lado: ");
    scanf("%lf", &lado1);

    printf("Introduce la longitud del segundo lado: ");
    scanf("%lf", &lado2);

    // Calcular la hipotenusa usando el teorema de Pitágoras
    // h = sqrt(a^2 + b^2)
    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    // Alternativa sin pow: hipotenusa = sqrt(lado1 * lado1 + lado2 * lado2);

    // Mostrar el resultado
    printf("La hipotenusa es: %.2lf\n", hipotenusa);

    return 0; // Indicar que el programa finalizó con éxito
}