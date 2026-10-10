#include <stdio.h>

// Approach:
// - get 2 float nums and operator
// - separate functions for + - * /
// - switch operator
// - call matching function
// - handle divide by 0

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
float cal(float a, float b, char op);

int main()
{
    float num1, num2, res;
    char op;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &num2);
    res = cal(num1, num2, op);
    printf("Result = %.2f\n", res);
    return 0;
}
float add(float a, float b){return a + b;}
float sub(float a, float b){ return a - b;}
float mul(float a, float b){return a * b;}
float div(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not possible.\n");
        return 0;
    }
    return a / b;
}

float cal(float a, float b, char op)
{
    switch (op)
    {
        case '+':
            return add(a, b);

        case '-':
            return sub(a, b);

        case '*':
            return mul(a, b);

        case '/':
            return div(a, b);

        default:
            printf("Invalid operator.\n");
            return 0;
    }
}