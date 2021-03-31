#include<stdio.h>

int main()
{
    int number1, number2, number3;
    printf("Enter the first number:\n");
    scanf("%d", &number1);

    printf("Enter the second number:\n");
    scanf("%d", &number2);

    //calculating subtraction

    number3 = number1 - number2;
    printf("%d", number3);

    return 0;
}
