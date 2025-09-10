#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool is_leap_year(int year) {
    // A year is a leap year if it is divisible by 4,
    // except for years divisible by 100,
    // unless they are also divisible by 400.
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    printf("Años bisiestos en el siglo XXII (2101-2200):\n");

    // Iterate through the years in the 22nd century
    for (int year = 2101; year <= 2200; year++) {
        if (is_leap_year(year)) {
            printf("%d es un año bisiesto.\n", year);
        }
    }

    return 0;
}
