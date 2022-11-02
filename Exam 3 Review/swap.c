#include <stdio.h>

void swap(int *a, int *b); // to accept ref: use *

int main() {
    int x = 1;
    int y = 2;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y); // to pass by ref: use & (like scanf())
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) { // access or change ref: use *
    int tempA = *a;
    *a = *b;
    *b = tempA;
}
