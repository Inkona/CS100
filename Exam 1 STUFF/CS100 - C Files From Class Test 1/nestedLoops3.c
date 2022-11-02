#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    for (int r = 0; r < num; r++) {
        for (int c = 0; c < num-r; c++)
            printf("X");
        printf("\n");
    }

    return 0;
}