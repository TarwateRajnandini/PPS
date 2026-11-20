#include<stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    // Taking input of two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    printf("\n--- Basic Arithmetic Operations ---\n"); 
    printf("1, Addition (+)\n"); 
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice); 

 
    switch (choice) {
        case 1:
            printf("Addition is = %d\n", num1 + num2);
            break;

        case 2:
            printf("Subtraction is = %d\n", num1 - num2);
            break;

        case 3:
            printf("Multiplication is = %d\n", num1 * num2);
            break;

        case 4:
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Division is = %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case 5:
            if (num2 != 0) {
                printf("Modulus (Remainder) is = %d\n", num1 % num2);
            } else {
                printf("Error! Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select a number between 1 and 5.\n");
    }

    return 0;
} 
