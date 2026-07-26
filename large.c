#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // If num1 is greater than or equal to both num2 and num3
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2lf is the largest number.\n", num1);
    }
    // If num2 is greater than or equal to both num1 and num3
    else if (num2 >= num1 && num2 >= num3) {
        printf("%.2lf is the largest number.\n", num2);
    }
    // If neither of the above is true, num3 must be the largest
    else {
        printf("%.2lf is the largest number.\n", num3);
    }

    return 0;
}
