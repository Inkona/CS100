#include <stdio.h>
int main(){
    int num1;
    int num2;
    int sum;
    //first num gather
    printf("Enter the first number: ");    
    scanf("%d", &num1);
    //sec num gather
    printf("Enter the second number: ");    
    scanf("%d", &num2);
    //calc and print sum
    sum = num1 + num2;
    printf("The sum of the two numbers is %d \n", sum);
    return 0;
}