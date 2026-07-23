#include <stdio.h>

void displayMenu() {
    printf("\n--- Arithmetic Operations Menu ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Exit\n");
    printf("Enter your choice (1-6): ");
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        
        // Validate input for choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        if (choice == 6) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 5) {
            printf("Enter first number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid numeric input!\n");
                while (getchar() != '\n');
                continue;
            }

            printf("Enter second number: ");
            if (scanf("%lf", &num2) != 1) {
                printf("Invalid numeric input!\n");
                while (getchar() != '\n');
                continue;
            }

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                    break;
                case 2:
                    result = num1 - num2;
                    printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                    break;
                case 3:
                    result = num1 * num2;
                    printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                    break;
                case 4:
                    if (num2 == 0) {
                        printf("Error! Division by zero is not allowed.\n");
                    } else {
                        result = num1 / num2;
                        printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                    }
                    break;
                case 5:
                    // Modulus operator (%) requires integer operands in C
                    if ((int)num2 == 0) {
                        printf("Error! Modulus by zero is not allowed.\n");
                    } else {
                        int modResult = (int)num1 % (int)num2;
                        printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, modResult);
                    }
                    break;
            }
        } else {
            printf("Invalid choice! Please select a valid option from the menu.\n");
        }

    } while (choice != 6);

    return 0;
}
