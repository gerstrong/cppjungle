#include <stdio.h>

double result;

int calc(char operator, double num1, double num2)
{
    // Use goto for branching
    if (operator == '+') {
        result = num1 + num2;
        return 0;
    } else if (operator == '-') {
        result = num1 - num2;
        return 0;
    } else if (operator == '*') {
        result = num1 * num2;
        return 0;
    } else if (operator == '/') {

        if(num2 == 0.0)
        {
            printf("Error: Illegal Division.\n");
            return 2;
        }

        result = num1 / num2;
        return 0;
    } else {
        printf("Error: Invalid operator\n");
        return 1;
    }
}

int main() {
    double num1, num2;
    char operator;

    // Input numbers and operator
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);       

    // If calc return 0, which means 0 errors, it will show the result.
    if(calc(operator, num1, num2) == 0)
    {
        printf("Result: %.2lf\n", result);
    }

    return 0;
}
