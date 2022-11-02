#include <stdio.h>

int main(){

    int i = 0;

    while (i<=400){
        printf("%d ", i);
        i=i+4;
    }

    printf("\n");

    int a = 0;
    while (a<=400){
        printf("%d ", a);
        a = a + 50;
    }

    printf("\n");

    int b = 0;
    while (b<=400){
        printf("%d ", b);
        b = b + 100;
    }

    printf("\n");
    return 0;
}