#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows; ++j) {
            // Print star for the first row, last row, first column, or last column
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("* ");
            } else {
                printf("  "); // Print spaces inside the square
            }
        }
        printf("\n");
    }

    return 0;
}
