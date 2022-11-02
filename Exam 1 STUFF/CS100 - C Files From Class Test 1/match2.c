#include <stdio.h>

int main(){


    printf("Enter 3 integers. ");
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
        printf("All three match.");
    else if (num1 != num2 && num2 != num3 && num1 != num3)
        printf("No matches.");
    else
        printf("Two match.");

    return 0;

}