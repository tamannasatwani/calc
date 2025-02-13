#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return (b != 0) ? a / b : 0; }
int modulus(int a, int b) { return (b != 0) ? a % b : 0; }

int main() {
    int choice;
    float num1, num2;

    while (1) { 

        printf("\nMenu:\n");
        printf("Press 1 for Addition (+)\n");
        printf("Press 2 for Subtraction (-)\n");
        printf("Press 3 for Multiplication (*)\n");
        printf("Press 4 for Division (/)\n");
        printf("Press 5 for Modulus (%%)\n");
        printf("Press 6 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting program. Thank you!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %.2f and %.2f = %.2f\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %.2f and %.2f = %.2f\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %.2f and %.2f = %.2f\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0)
                    printf("Division of %.2f and %.2f = %.2f\n", num1, num2, divide(num1, num2));
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            case 5:
                if ((int)num2 != 0)
                    printf("Modulus of %d and %d = %d\n", (int)num1, (int)num2, modulus((int)num1, (int)num2));
                else
                    printf("Error! Modulus by zero is not allowed.\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

