#include <stdio.h>

double result;

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

	goto calc;
	
// Label for printing the result
print_result:
    printf("Result: %.2lf\n", result);
    goto end;
	

calc:

    // Use goto for branching
    if (operator == '+') {
        result = num1 + num2;
        goto print_result;
    } else if (operator == '-') {
        result = num1 - num2;
        goto print_result;
    } else if (operator == '*') {
        result = num1 * num2;
        goto print_result;
    } else if (operator == '/') {
        result = num1 / num2;
        goto print_result;
    } else {
        printf("Error: Invalid operator\n");
        goto end;
    }


// Label programs end
end:
    return 0;
}
