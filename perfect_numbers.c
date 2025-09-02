#include <stdio.h>
#include <stdbool.h> // For using bool type

// Function to check if a number is perfect
bool isPerfect(int num) {
    if (num <= 1) { // Perfect numbers are positive integers > 1
        return false;
    }
    int sum_divisors = 1; // 1 is always a divisor
    for (int i = 2; i * i <= num; i++) { // Optimized loop: check up to sqrt(num)
        if (num % i == 0) {
            sum_divisors += i;
            if (i * i != num) { // If i*i == num, i is counted once. Otherwise, i and num/i are distinct divisors.
                sum_divisors += num / i;
            }
        }
    }
    return sum_divisors == num;
}

int main() {
    int even_perfect_numbers[3];
    int odd_perfect_numbers[3];
    int even_count = 0;
    int odd_count = 0;
    int num = 1; // Start checking from 1

    const int MAX_SEARCH_LIMIT = 100000; // Define a search limit to avoid infinite loops

    printf("Searching for perfect numbers up to %d...\n", MAX_SEARCH_LIMIT);

    while ((even_count < 3 || odd_count < 3) && num <= MAX_SEARCH_LIMIT) {
        if (isPerfect(num)) {
            if (num % 2 == 0) {
                if (even_count < 3) {
                    even_perfect_numbers[even_count++] = num;
                }
            } else { // Odd number
                if (odd_count < 3) {
                    odd_perfect_numbers[odd_count++] = num;
                }
            }
        }
        num++;
    }

    printf("\nFirst three even perfect numbers found:\n");
    for (int i = 0; i < even_count; i++) {
        printf("%d\n", even_perfect_numbers[i]);
    }
    if (even_count < 3) {
        printf("Could not find all three even perfect numbers within the search limit.\n");
    }


    printf("\nFirst three odd perfect numbers found:\n");
    for (int i = 0; i < odd_count; i++) {
        printf("%d\n", odd_perfect_numbers[i]);
    }
    if (odd_count == 0) {
        printf("No odd perfect numbers found within the search limit of %d.\n", MAX_SEARCH_LIMIT);
        printf("It is a long-standing open problem in mathematics whether any odd perfect numbers exist.\n");
    } else if (odd_count < 3) {
        printf("Could not find all three odd perfect numbers within the search limit.\n");
    }

    return 0;
}