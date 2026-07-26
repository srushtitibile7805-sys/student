#include <stdio.h>

int main() {
    float percentage;

    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
    } else if (percentage >= 90) {
        printf("Grade: A+ (Outstanding)\n");
    } else if (percentage >= 80) {
        printf("Grade: A (Excellent)\n");
    } else if (percentage >= 70) {
        printf("Grade: B (Good)\n");
    } else if (percentage >= 60) {
        printf("Grade: C (Average)\n");
    } else if (percentage >= 50) {
        printf("Grade: D (Pass)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
