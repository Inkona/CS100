#include <stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // 5
    
    for (int r = 0; r < num; r++) {
        for (int c = 0; c <= r; c++)
            printf("X");
        printf("\n");
    }

    return 0;
}
