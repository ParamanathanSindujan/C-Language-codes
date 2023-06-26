//calc 2
/*Write a C program to create a simple calculator. The program should allow the user to enter
two numbers and an operator. The operators are
1. +
2. -
3. *
4. /
You should print an appropriate error message if the user enters invalid operator.
Use nested if-else statements in your program.*/

#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    float result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

