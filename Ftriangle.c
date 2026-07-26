#include <stdio.h>

int main() {
    int rows, number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            // Using %-3d or conditional spacing to accommodate multi-digit numbers cleanly
            if (number < 10) {
                printf("%d   ", number);
            } else if (number < 100) {
                printf("%d  ", number);
            } else {
                printf("%d ", number);
            }
            ++number;
        }
        printf("\n");
    }

    return 0;
}
