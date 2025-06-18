#include <stdio.h>
#include <math.h>

void displayMenu() {
    printf("Scientific Calculator\n");
    printf("1. Trigonometric Operations\n");
    printf("2. Exponential Operations\n");
    printf("3. Logarithmic Operations\n");
    printf("4. Power Operation\n");
    printf("5. Square Root\n");
    printf("6. Exit\n");
}

void trigonometricOperations() {
    int choice;
    double angle;
    printf("Trigonometric Operations\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    angle = angle * 3.14159265359 / 180.0; // Convert to radians
    switch (choice) {
        case 1:
            printf("sin(%.2lf) = %.2lf\n", angle * 180.0 / 3.14159265359, sin(angle));
            break;
        case 2:
            printf("cos(%.2lf) = %.2lf\n", angle * 180.0 / 3.14159265359, cos(angle));
            break;
        case 3:
            if (cos(angle) != 0)
                printf("tan(%.2lf) = %.2lf\n", angle * 180.0 / 3.14159265359, tan(angle));
            else
                printf("Error: Tangent is undefined!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void exponentialOperations() {
    double base, exponent;
    printf("Exponential Operations\n");
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, pow(base, exponent));
}

void logarithmicOperations() {
    double num;
    printf("Logarithmic Operations\n");
    printf("1. Natural Logarithm\n");
    printf("2. Base-10 Logarithm\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num > 0) {
        switch (choice) {
            case 1:
                printf("ln(%.2lf) = %.2lf\n", num, log(num));
                break;
            case 2:
                printf("log10(%.2lf) = %.2lf\n", num, log10(num));
                break;
            default:
                printf("Invalid choice!\n");
        }
    } else {
        printf("Error: Logarithm is undefined for non-positive numbers!\n");
    }
}

void powerOperation() {
    double base, exponent;
    printf("Power Operation\n");
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, pow(base, exponent));
}

void squareRoot() {
    double num;
    printf("Square Root\n");
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("sqrt(%.2lf) = %.2lf\n", num, sqrt(num));
    } else {
        printf("Error: Square root is undefined for negative numbers!\n");
    }
}

int main() {
    int choice;
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                trigonometricOperations();
                break;
            case 2:
                exponentialOperations();
                break;
            case 3:
                logarithmicOperations();
                break;
            case 4:
                powerOperation();
                break;
            case 5:
                squareRoot();
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }
    return 0;
}
