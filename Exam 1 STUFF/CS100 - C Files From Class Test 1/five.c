#include <stdio.h>

int main(){

    int num;
    printf("Enter a value: ");
    scanf("%d", &num);

    int sum = 0;

    for (int x=1; x<=num; x++)
        sum = sum + x;

    printf("Sum: %d\n", sum);

    return 0;
}