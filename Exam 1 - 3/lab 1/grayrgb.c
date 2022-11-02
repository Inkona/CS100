#include <stdio.h>
#include <math.h>

int main(){
    int c1, c2, c3;
    int min;
    scanf("%d %d %d", &c1, &c2, &c3);
    if(c1 < c2 && c1 < c3)
    {
        min = c1;
    }
    else if(c2 < c1 && c2 < c3)
    {
        min = c2;
    }
    else
    {
        min = c3;
    }

    c1 -= min;
    c2 -= min;
    c3 -= min;

    printf("%d %d %d\n", c1, c2, c3);

    return 0;
}