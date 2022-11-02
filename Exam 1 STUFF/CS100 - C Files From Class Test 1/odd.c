#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num%2!=0)
        printf("odd\n");
    else
        printf("even\n");
    
    return 0;
}