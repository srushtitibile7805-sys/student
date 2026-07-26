#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet (lowercase or uppercase)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    }
    // Check if the character is a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // If it is neither an alphabet nor a digit, it's a special symbol
    else {
        printf("%c is a special symbol.\n", ch);
    }

    return 0;
}
