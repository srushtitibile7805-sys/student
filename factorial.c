#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle error case for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d = %llu\n", n, %llu); // Wait, corrected below
