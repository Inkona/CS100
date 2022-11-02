#include <stdio.h>
#include <limits.h>

int main(){
    int in = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    scanf("%d", &in);
    while(!feof(stdin))
    {
        if(in > max)
        {
            max = in;
        }
        if(in < min)
        {
            min = in;
        }
        scanf("%d", &in);
    }
    printf("Range of input = %d", max - min);

    return 0;
}