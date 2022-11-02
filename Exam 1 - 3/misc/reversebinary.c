#include <stdio.h>

int main(void) {
    int in;
    scanf("%d", &in);
    while(in > 0)
    {
        int output = in % 2;
        printf("%d", output);
        in /= 2;
    }
   return 0;
}
