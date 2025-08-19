#include <stdio.h>

int addition(int operand1, int operand2) {
    return operand1 + operand2;
}

int multiply(int operand1, int operand2) {
    return operand1 * operand2;
}

int subtraction(int operand1, int operand2) {
    return operand1 - operand2;
}

float divide(int operand1, int operand2) {
    if (operand2 == 0) {
        printf("Error: Division by zero not allowed!\n");
        return 0.0;
    }
    return (float)operand1 / operand2;  // cast to float for decimal result
}

int main() {
    int operand1, operand2;

    printf("Enter the operand 1: ");
    scanf("%d", &operand1);

    printf("Enter the operand 2: ");
    scanf("%d", &operand2);

    printf("\nResult:\n");
    printf("Addition: %d\n", addition(operand1, operand2));
    printf("Subtraction: %d\n", subtraction(operand1, operand2));
    printf("Multiply: %d\n", multiply(operand1, operand2));
    printf("Divide: %.2f\n", divide(operand1, operand2));  // prints 2 decimal places

    return 0;
}
