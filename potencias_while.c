#include <stdio.h>

int main() {
    int n; // Base number
    int max_limite; // Maximum limit
    long long current_power; // To store the current power, use long long to avoid overflow for larger powers

    printf("Introduce un numero entero (n): ");
    scanf("%d", &n);

    printf("Introduce un limite maximo (max_limite): ");
    scanf("%d", &max_limite);

    printf("Las potencias de %d menores que %d son:\n", n, max_limite);

    // Special case: n = 0
    if (n == 0) {
        if (1 < max_limite) { // 0^0 = 1
            printf("1\n");
        }
        if (0 < max_limite) { // 0^power = 0 for power >= 1
            printf("0\n");
        }
    }
    // Special case: n = 1
    else if (n == 1) {
        if (1 < max_limite) { // 1^any_power = 1
            printf("1\n");
        }
    }
    // Special case: n = -1
    else if (n == -1) {
        // Powers are 1, -1, 1, -1...
        // Print 1 if 1 < max_limite
        if (1 < max_limite) {
            printf("1\n");
        }
        // Print -1 if -1 < max_limite
        if (-1 < max_limite) {
            printf("-1\n");
        }
    }
    // General case: |n| > 1
    else {
        current_power = 1; // Start with n^0 = 1

        while (current_power < max_limite) {
            printf("%lld\n", current_power);

            // Check for potential overflow or if the next power will exceed max_limite before multiplying.
            // If n is positive:
            if (n > 0) {
                // If `current_power` is already so large that multiplying by `n` would exceed `max_limite`,
                // then break. This prevents `current_power * n` from becoming an invalid value
                // (e.g., negative due to overflow) that might still satisfy the loop condition later.
                if ((long long)max_limite / n < current_power) {
                    break;
                }
            }
            // If n is negative:
            // The `while (current_power < max_limite)` condition handles termination.
            // Overflow for negative `n` is more complex, but `long long` usually suffices for typical problems.
            // We rely on the `while` loop condition to terminate when `current_power` (after multiplication)
            // is no longer less than `max_limite`.

            current_power *= n;
        }
    }

    return 0;
}
