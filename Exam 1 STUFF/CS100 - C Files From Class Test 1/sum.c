#include <stdio.h>

int main(){

    printf("Enter the first number: ");
    int num1;
    scanf("%d", &num1);

    printf("Enter the second number: ");
    int num2;
    scanf("%d", &num2);

    int sum;

    sum = num1 + num2;

    printf("The result is %d \n", sum);

    return 0;
} 