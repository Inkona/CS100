#include <stdio.h>

int countSevens(int n) {
    if (n == 0) {
        return 0;   // based case
    }
    if (n%10 == 7) {     // 7   recursive case
        return 1 + countSevens(n/10);
    }

    return countSevens(n/10);   // not 7    recursive case
}

int main() {

    int num;
    printf("Enter an integer to compute some stats about it:\n");
    scanf("%d", &num);

    printf("countSevens(%d) = %d\n", num, countSevens(num));

    return 0;
}
