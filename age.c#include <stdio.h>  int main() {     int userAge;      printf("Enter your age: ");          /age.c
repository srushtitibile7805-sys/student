#include <stdio.h>

int main() {
    int userAge;

    printf("Enter your age: ");
    
    // Read user input from the keyboard
    scanf("%d", &userAge);

    printf("You are %d years old.\n", userAge);

    return 0;
}
