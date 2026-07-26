#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces for alignment
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        // Print ascending numbers
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }

        // Print descending numbers
        for (int j = i - 1; j >= 1; --j) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
