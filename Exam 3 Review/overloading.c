#include <stdio.h>

int max3(int, int, int);
int max2(int, int);

int main() {

    int a, b, c;
    printf("Enter three integers:\n");
    scanf("%d%d%d", &a, &b, &c);

    int large2 = max2(a, b);
    int large3 = max3(a, b, c);

    printf("The max of the two is %d\n", large2);
    printf("The max of the three is %d\n", large3);

    return 0;
}

int max2(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int max3(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    if (b >= c && b >= a)
        return b;
    return c;
}
