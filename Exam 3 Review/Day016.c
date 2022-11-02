#include <stdio.h>

int main() {

    int counts[11] = { 0 }; // 0-10
    printf("Enter quiz grades in range 0-10 or EOF to exit:\n");
    while (1) {
        int grade;
        scanf("%d", &grade);

        if (feof(stdin)) break;

        if (grade < 0 || grade > 10) {
            printf("%d is not a valid grade\n", grade);
        }
        else {
            counts[grade]++;
        }
    }

    int max = counts[0];
    for (int i = 1; i < 11; i++) {
        if (counts[i] > max)
            max = counts[i];
    }
    printf("The grades that occurred the most are:");

    for (int i = 0; i < 11; i++) {
        if (counts[i] == max) {
            printf(" %d", i);
        }
    }
    printf("\nand they occurred %d times\n", max);

    return 0;
}