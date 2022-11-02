#include <stdio.h>

int main(){

    int x[5];
    printf("Enter 5 integers: \n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &x[i]);

    }

    x[2] = (x[0] + x[4]) / 2;

    for(int i = 0; i < 5; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}