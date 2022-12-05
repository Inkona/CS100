#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + countDigits(n/10);
}


int main() {

    int num;
    printf("Enter an integer to compute some stats about it:\n");
    scanf("%d", &num);

    printf("countDigits(%d) = %d\n", num, countDigits(num));

    return 0;
}
