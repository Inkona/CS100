#include<stdio.h>
#include<stdlib.h>

int threes(int val) {
    static int count = 0;
    if(val > 0)
    {
        if((val % 10) == 3)
        {
            count++;
        }
        threes(val/10);
    }
    else
    {
        return count;
    }
}

int main(int argc, char *argv[]) {
    int val = atoi(argv[1]);

    printf("%d contains %d threes.\n", val, threes(val));

    return 0;
}