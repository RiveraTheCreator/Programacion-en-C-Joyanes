
#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    long long int n = 5; // Example value for n
    int potencia = 3;   // Example value for potencia

    // pow() function takes double arguments and returns a double.
    // We need to cast n and potencia to double.
    double resultado_double = pow((double)n, (double)potencia);

    // If you need the result back as a long long int,
    // be aware of potential data loss or overflow if the result is too large.
    long long int resultado_long_long = (long long int)resultado_double;

    printf("Using pow():\n");
    printf("%lld elevado a la %d es (double): %lf\n", n, potencia, resultado_double);
    printf("%lld elevado a la %d es (long long int): %lld\n", n, potencia, resultado_long_long);

    // Alternative for integer exponentiation (more accurate for integers)
    long long int resultado_manual = 1;
    for (int i = 0; i < potencia; i++) {
        resultado_manual *= n;
    }
    printf("\nUsing a manual loop for integer exponentiation:\n");
    printf("%lld elevado a la %d es (long long int): %lld\n", n, potencia, resultado_manual);


    return 0;
}
