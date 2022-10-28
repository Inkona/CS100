#include <stdio.h>

int main(){
    int in1, in2, in3, smallest;
    scanf("%d %d %d", in1, in2, in3);
    if(in1 <= in2 && in1 <= in3)
    {
        smallest = in1;
    }
    else if(in2 <= in3 && in2 <= in1)
    {
        smallest = in2;
    }
    else
    {
        smallest = in3;
    }

    printf("%d\n", smallest);

    return 0;
}