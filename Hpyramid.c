#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        // Print characters for the row
        for (int j = 1; j <= 2 * i - 1; ++j) {
            // Print star at the first position, last position, or on the last row
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                printf("* ");
            } else {
                printf("  "); // Print spaces inside the pyramid
            }
        }
        printf("\n");
    }

    return 0;
}
