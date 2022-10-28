#include <stdio.h>

int main(){
    int in = 0;
    int sum = 0;
    scanf("%d", &in);
    while(in > 0)
    {
        sum = sum + (in % 10);
        in = in / 10;
    }

    printf("%d\n", sum);

    return 0;
}