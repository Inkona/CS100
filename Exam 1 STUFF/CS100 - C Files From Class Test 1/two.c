#include <stdio.h>

int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score>=0 && score<=100)
        printf("valid\n");
    else
        printf("invalid\n");
    
    return 0;
}