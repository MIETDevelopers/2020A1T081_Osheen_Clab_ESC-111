#include<stdio.h>

int main()
{
    int num1, num2, add, sub, mul, remainder;
    printf("Enter first number :\n");
    scanf("%d", &num1);
    printf("Enter second number :\n");
    scanf("%d",&num2);

    //Addition
    printf("Addition \n");
    add = num1 + num2;
    printf("The sum is : %d \n", add);

    //Subtraction
    printf("Subtraction \n");
    sub = num1 - num2;
    printf("The subtraction is : %d \n", sub);

    //Multiplication
    printf("Multiplication \n");
    mul = num1 * num2;
    printf("The product is : %d \n", mul);

    //Remainder
    printf("Remainder \n");
    remainder = num1%num2;
    printf("The remainder is : %d\n", remainder);

    return 0;

}
