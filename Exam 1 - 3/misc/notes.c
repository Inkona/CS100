#include <stdio.h>
#include <math.h>

int main()
{
    int in1, in2, in3, min, max;
    scanf("%d%d%d", &in1, &in2, &in3);
    if(in1 > in2 && in1 > in3)
    {
        max = in1;
    }
    else if(in2 > in3 && in2 > in1)
    {
        max = in2;
    }
    else
    {
        max = in3;
    }

    if(in1 < in2 && in1 < in3)
    {
        min = in1;
    }
    else if(in2 < in3 && in2 < in1)
    {
        min = in2;
    }
    else
    {
        min = in3;
    }
    printf("The range is %d", (max - min));

return(0);
}