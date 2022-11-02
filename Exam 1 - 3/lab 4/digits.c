#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int count[10];
    for (int i = 0; i < 10; i++) 
    {
        count[i] = 0;
    }
    int duplicateFound = 0;
    while (n >0) 
    {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
        if (count[digit] > 1) 
        {
            duplicateFound = 1;
            break;
        }
    }
    if(duplicateFound) 
    {
        printf("Duplicate digits found\n");
    } else 
    {
        printf("No duplicate digits found\n");
    }
    return 0;
}