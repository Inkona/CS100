#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    int ar[num][num];
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            if(i == 0 || i == num - 1 || j == 0 || j == num - 1)
            {
                printf("x");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}