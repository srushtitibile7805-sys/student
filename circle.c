#include <stdio.h>

// Define the value of PI as a constant macro
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Ask the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area: PI * r * r
    area = PI * radius * radius;

    // Calculate circumference: 2 * PI * r
    circumference = 2 * PI * radius;

    // Display the results with 2 decimal places
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
