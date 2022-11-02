#include <stdio.h>

int main()
{
    int sum=0;
    int i = 0;
    int num;
    printf("Enter numbers (CTRL-D to end): ");
    while (1) {
        scanf("%d", &num);  // Read value
        if (feof(stdin)) break;
        if (num % 2 == 0)
            i++;
     }

    printf("The number of even number: %d\n", i);

    return 0;
}