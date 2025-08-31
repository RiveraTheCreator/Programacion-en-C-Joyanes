#include <stdio.h>

// Función para calcular el número de parejas de conejos después de N meses
long long fibonacci_conejos(int n_meses) {
    if (n_meses <= 0) {
        return 0;
    } else if (n_meses == 1 || n_meses == 2) {
        return 1;
    } else {
        long long a = 1; // Representa F(n-2)
        long long b = 1; // Representa F(n-1)
        long long siguiente;

        for (int i = 3; i <= n_meses; i++) {
            siguiente = a + b;
            a = b;
            b = siguiente;
        }
        return b;
    }
}

// Función para calcular cuántos meses se necesitan para alcanzar un número dado de parejas
int meses_para_conejos(long long parejas_objetivo) {
    if (parejas_objetivo <= 0) {
        return 0;
    } else if (parejas_objetivo == 1) {
        return 1; // Se necesita 1 mes para tener 1 pareja (la inicial)
    }

    long long a = 1; // Representa F(n-2)
    long long b = 1; // Representa F(n-1)
    int meses = 2; // Empezamos desde el mes 2 porque F(1)=1, F(2)=1

    while (b < parejas_objetivo) {
        long long siguiente = a + b;
        a = b;
        b = siguiente;
        meses++;
    }
    return meses;
}

int main() {
    // Parte 1: Calcular parejas después de un año (12 meses)
    int meses_ejercicio = 12;
    long long parejas_despues_de_un_ano = fibonacci_conejos(meses_ejercicio);
    printf("Después de %d meses, habrá %lld parejas de conejos.\n", meses_ejercicio, parejas_despues_de_un_ano);

    // Parte 2: Calcular meses para alcanzar un número dado de parejas
    long long parejas_a_alcanzar = 200; // Puedes cambiar este valor para probar
    int meses_necesarios = meses_para_conejos(parejas_a_alcanzar);
    printf("Se necesitan %d meses para alcanzar o superar %lld parejas de conejos.\n", meses_necesarios, parejas_a_alcanzar);

    long long parejas_a_alcanzar_ejemplo_2 = 1; // Ejemplo para 1 pareja
    int meses_necesarios_ejemplo_2 = meses_para_conejos(parejas_a_alcanzar_ejemplo_2);
    printf("Se necesitan %d meses para alcanzar o superar %lld parejas de conejos.\n", meses_necesarios_ejemplo_2, parejas_a_alcanzar_ejemplo_2);

    long long parejas_a_alcanzar_ejemplo_3 = 5; // Ejemplo para 5 parejas
    int meses_necesarios_ejemplo_3 = meses_para_conejos(parejas_a_alcanzar_ejemplo_3);
    printf("Se necesitan %d meses para alcanzar o superar %lld parejas de conejos.\n", meses_necesarios_ejemplo_3, parejas_a_alcanzar_ejemplo_3);

    return 0;
}