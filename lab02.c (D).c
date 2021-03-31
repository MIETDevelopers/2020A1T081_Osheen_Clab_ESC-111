#include <stdio.h>

int main()
{
    float number1, number2, division;

    printf("Enter the first number:\n");
    scanf("%f", &number1);

    printf("Enter the second number:\n");
    scanf("%f", &number2);

    division = number1 / number2;
    printf("%f", division);

    return 0;
}
