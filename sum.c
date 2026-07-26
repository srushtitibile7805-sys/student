#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Handle negative numbers by making them positive (optional, but good practice)
    if (n < 0) {
        n = -n;
    }

    int temp = n; // Store original number for output formatting

    while (n != 0) {
        remainder = n % 10; // Extract the last digit
        sum += remainder;   // Add it to the sum
        n /= 10;            // Remove the last digit
    }

    printf("Sum of digits of %d = %d\n", temp, sum);

    return 0;
}
