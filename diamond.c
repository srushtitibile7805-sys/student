#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows (half of diamond): ");
    scanf("%d", &rows);

    // Upper half of the diamond
    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; --i) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
