#include <stdio.h>
int main(){
    int number1, number2, sum;
    printf("Enter the first number:\n");
    scanf("%d", &number1);
    printf("Enter the second number:\n");
    scanf("%d", &number2);
    //calculating sum
    sum = number1 + number2;
    printf("%d", sum);
    return 0;
}
