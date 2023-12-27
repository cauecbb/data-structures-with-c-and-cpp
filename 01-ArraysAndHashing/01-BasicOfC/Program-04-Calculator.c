#include <stdio.h>

int main()
{

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+, -, * and /): ");
    scanf("%c", &operator);

    printf("\nFirst Number: ");
    scanf("%lf", &num1);

    printf("\nSecond Number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("The result is %.2f.", result);
        break;
    case '-':
        result = num1 - num2;
        printf("The result is %.2f.", result);
        break;
    case '*':
        result = num1 * num2;
        printf("The result is %.2f.", result);
        break;
    case '/':
        result = num1 / num2;
        printf("The result is %.2f.", result);
        break;

    default:
        printf("'%c' is no valid. Please enter a valid operator. ", operator);
        break;
    }

    return 0;
}