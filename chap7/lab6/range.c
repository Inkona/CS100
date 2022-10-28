#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double max = 0;
    double min = 0;
    double n = 0;
    if(argc == 1)
    {
        printf("This program requires at least one argument\n");
    }
    else
    {
        max = atof(argv[1]);
        min = atof(argv[1]);
        for(int i = 1; i < argc; i++)
        {
            n = atof(argv[i]);
            if(n > max)
            {
                max = n;
            }
            if(n < min)
            {
                min = n;
            }
        }
        printf("The range of these %d values is %lf", argc - 1, max - min);
    }
    return 0;
}