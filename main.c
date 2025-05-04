#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    // Ask the user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c to catch any whitespace character

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform the operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%d %c %d = %d\n", num1, operator, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}

