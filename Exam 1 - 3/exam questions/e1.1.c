#include <stdio.h>
int main()
{
    int num = 0;
    int even = 0;
    int odd = 0;
    while(1) 
    {
        scanf("%d", &num);
        if (feof(stdin)) break;
        if (num % 2 == 0)
        {
            even += num;
        }
        else
        {
            odd += num;
        }
    }
    printf("%d\n", even - odd);
    
    return 0;
}