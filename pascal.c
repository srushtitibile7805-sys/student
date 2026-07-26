#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        int coef = 1;
        for (int j = 0; j <= i; j++) {
            // Using %4d to maintain alignment for larger numbers
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
